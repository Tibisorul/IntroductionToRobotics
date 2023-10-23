const int pinLedRosu = 9;
const int pinLedVerde = 10;
const int pinLedAlbastru = 11;

const int pinPotenziometruRosu = A0;
const int pinPotenziometruVerde = A1;
const int pinPotenziometruAlbastru = A2;

void setup() {
  // Inițializarea pinilor LED-ului ca ieșiri
  pinMode(pinLedRosu, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAlbastru, OUTPUT);
}

void loop() {
  // Citirea valorilor de la potențiometre
  int valoarePotenziometruRosu = analogRead(pinPotenziometruRosu);
  int valoarePotenziometruVerde = analogRead(pinPotenziometruVerde);
  int valoarePotenziometruAlbastru = analogRead(pinPotenziometruAlbastru);

  // Maparea valorilor citite la intervalul 0-255 pentru funcția analogWrite
  int valoareLedRosu = map(valoarePotenziometruRosu, 0, 1023, 0, 255);
  int valoareLedVerde = map(valoarePotenziometruVerde, 0, 1023, 0, 255);
  int valoareLedAlbastru = map(valoarePotenziometruAlbastru, 0, 1023, 0, 255);

  // Setarea intensității luminii pentru fiecare culoare a LED-ului
  analogWrite(pinLedRosu, valoareLedRosu);
  analogWrite(pinLedVerde, valoareLedVerde);
  analogWrite(pinLedAlbastru, valoareLedAlbastru);
}
