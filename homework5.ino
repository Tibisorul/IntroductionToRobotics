const int latchPin = 11;
const int clockPin = 10;
const int dataPin = 12;
const int buzzerPin = 13;

const int segD1 = 4;
const int segD2 = 5;
const int segD3 = 6;
const int segD4 = 7;

const int buttonStartPause = 8;
const int buttonReset = 2;
const int buttonSaveLap = 3;

int displayDigits[] = {segD1, segD2, segD3, segD4};
const int displayCount = 4;

const int encodingsNumber = 16;

byte byteEncodings[encodingsNumber] = {
  B11111100,
  B01100000,
  B11011010,
  B11110010,
  B01100110,
  B10110110,
  B10111110,
  B11100000,
  B11111110,
  B11110110,
  B11101110,
  B00111110,
  B10011100,
  B01111010,
  B10011110,
  B10001110
};

unsigned long lastTime = 0;
unsigned long delayCount = 50;
unsigned long number = 0;
bool isRunning = false;
bool isPaused = false;
int lapTimes[4] = {0};
int lapIndex = 0;
bool displayLapTimes = false;

unsigned long lapStartTime = 0;
unsigned long lapDisplayTime = 0;

void setup() {
  Serial.begin(9600);

  Serial.print("Checking buzzer pin configuration: ");
  pinMode(buzzerPin, OUTPUT);
  if (digitalRead(buzzerPin) == HIGH) {
    Serial.println("OK");
  } else {
    Serial.println("Error");
  }

  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  for (int i = 0; i < displayCount; i++) {
    pinMode(displayDigits[i], OUTPUT);
    digitalWrite(displayDigits[i], LOW);
  }

  pinMode(buttonStartPause, INPUT_PULLUP);
  pinMode(buttonReset, INPUT_PULLUP);
  pinMode(buttonSaveLap, INPUT_PULLUP);
}

void loop() {
  checkButtons();

  if (digitalRead(buttonReset) == LOW) {
    number = 0;
    isRunning = false;
    isPaused = false;
    lapIndex = 0;
    for (int i = 0; i < 4; ++i) {
      lapTimes[i] = 0;
    }
    displaySavedLapTimes();
    displayLapTimes = false;
    Serial.println("Reset button pressed.");
  }

  if (digitalRead(buttonSaveLap) == LOW) {
    if (isRunning && !isPaused) {
      if (lapIndex < 4) {
        lapTimes[lapIndex] = number;
        lapIndex++;
        Serial.print("Lap saved! Lap Times: ");
        for (int i = 0; i < 4; ++i) {
          Serial.print(lapTimes[i]);
          Serial.print(" ");
        }
        Serial.println();
        tone(buzzerPin, 1000, 200);
        Serial.println("Buzzer activated for Lap save.");
      } else {
        lapIndex = 0;
      }
    }
  }

  if (digitalRead(buttonStartPause) == LOW) {
    isRunning = !isRunning;
    Serial.print("Start/Pause button pressed. State: ");
    Serial.println(isRunning ? "Running" : "Paused");
    tone(buzzerPin, 1000, 200);
    Serial.println("Buzzer activated for Start/Pause.");
  }

  if (displayLapTimes) {
    writeLapTimes();
    displayLapTimes = false;
  }

  checkDisplay();
}

void checkButtons() {
  int buttonStartPauseState = digitalRead(buttonStartPause);
  if (buttonStartPauseState == LOW) {
    isRunning = !isRunning;
    Serial.print("Start/Pause button pressed. State: ");
    Serial.println(isRunning ? "Running" : "Paused");
    tone(buzzerPin, 1000, 200);
    Serial.println("Buzzer activated for Start/Pause.");
  }

  int buttonResetState = digitalRead(buttonReset);
  if (buttonResetState == LOW) {
    number = 0;
    isRunning = false;
    isPaused = false;
    lapIndex = 0;
    for (int i = 0; i < 4; ++i) {
      lapTimes[i] = 0;
    }
    displaySavedLapTimes();
    Serial.println("Reset button pressed.");
    tone(buzzerPin, 1000, 200);
    Serial.println("Buzzer activated for Reset.");
  }

  int buttonSaveLapState = digitalRead(buttonSaveLap);
  if (buttonSaveLapState == LOW) {
    if (isRunning && !isPaused) {
      if (lapIndex < 4) {
        lapTimes[lapIndex] = number;
        lapIndex++;
        Serial.print("Lap saved! Lap Times: ");
        for (int i = 0; i < 4; ++i) {
          Serial.print(lapTimes[i]);
          Serial.print(" ");
        }
        Serial.println();
        tone(buzzerPin, 1000, 200);
        Serial.println("Buzzer activated for Lap save.");
      } else {
        lapIndex = 0;
      }
    }
  }
}

void checkDisplay() {
  if (isRunning && !isPaused && millis() - lastTime > delayCount) {
    number++;
    number %= 10000;
    lastTime = millis();
  }

  writeNumber(number);
}

void writeLapTimes() {
  for (int i = 0; i < 4; ++i) {
    if (lapTimes[i] != 0) {
      activateDisplay(i);
      writeReg(byteEncodings[lapTimes[i]]);
      while (millis() - lapDisplayTime < 100) {
        // Așteaptă până când au trecut 100 de milisecunde
      }
      writeReg(B00000000);
    }
  }
}

void displaySavedLapTimes() {
  Serial.println("Saved Lap Times:");
  for (int i = 0; i < 4; ++i) {
    Serial.print("Lap ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(lapTimes[i]);
  }
}

void writeReg(int digit) {
  digitalWrite(latchPin, LOW);

  for (int i = 7; i >= 0; --i) {
    digitalWrite(dataPin, (digit >> i) & 1);
    digitalWrite(clockPin, HIGH);
    digitalWrite(clockPin, LOW);
  }

  digitalWrite(latchPin, HIGH);
}

void activateDisplay(int displayNumber) {
  for (int i = 0; i < displayCount; i++) {
    digitalWrite(displayDigits[i], HIGH);
  }
  digitalWrite(displayDigits[displayNumber], LOW);
}

void writeNumber(int number) {
  int currentNumber = number;
  int displayDigit = 3;
  int lastDigit = 0;

  if (currentNumber == 0) {
    for (int i = 0; i < 4; i++) {
      activateDisplay(i);
      writeReg(byteEncodings[0]);
      while (millis() - lapDisplayTime < 100) {
        // Așteaptă până când au trecut 100 de milisecunde
      }
      writeReg(B00000000);
    }
  } else {
    while (currentNumber != 0) {
      lastDigit = currentNumber % 10;
      activateDisplay(displayDigit);
      writeReg(byteEncodings[lastDigit]);
      while (millis() - lapDisplayTime < 100) {
        // Așteaptă până când au trecut 100 de milisecunde
      }
      displayDigit--;
      currentNumber /= 10;
      writeReg(B00000000);
    }
  }
}
