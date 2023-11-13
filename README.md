# IntroductionToRobotics
Bine ai venit în spațiul meu dedicat explorării fascinante a roboticilor! Acest repository este creat special pentru cursul de "Introduction to Robotics" din cadrul Universitatii Bucuresti, Facultatea de Matematica-Informatica, domeniu Calculatoare si Tehnologia Informatiei, in anul III, susținut de domnul profesor Andrei Dumitru.In acest repository voi posta cerintele temelor cat si rezolvarea acestora pe care ni le-a acordat domnul profesor.

# Homework 2

Deadline: 26 Octombrie 2023

### [TikTok Video Showcase](https://www.tiktok.com/@tiberiug.dobre/video/7293147954272095521?_r=1&_t=8gkhgQ4QfU8) Leave a like if you like :)

#### Componentele utilizate:
- LED RGB: Un LED care poate emite lumina în trei culori de bază: roșu (Red), verde (Green) și albastru (Blue). Fiecare componentă a LED-ului RGB este controlată individual pentru a obține diferite culori.
- Potențiometre (3): Componente care permit reglarea rezistenței lor în funcție de poziția unui cursor. Acestea sunt utilizate pentru a controla intensitatea luminii pentru fiecare culoare a LED-ului RGB.
- Rezistoare(3, fiecare avand rezistenta de 330Ω) și fire: Sunt utilizate pentru a asigura conexiuni sigure între componentele tale și pentru a limita curentul în circuit, în special când sunt conectate la pinii digitali ai Arduino.
- Arduino Board: Placa Arduino este creierul proiectului meu, care preia valorile de la potențiometre și controlează intensitatea luminii pentru fiecare culoare a LED-ului RGB.

  
  ![image](https://github.com/Tibisorul/IntroductionToRobotics/assets/127014075/679a4a08-c9be-4456-941b-3629c7bb2d73)


#### Cerinte in ceea ce priveste modul de programare:
- Scrierea unui cod curat și bine structurat. 
- Evitarea utilizarii "magic numbers".
- Optare pentru funcția map().
- Calcularea valorii în interiorul funcției analogWrite

#### Ce am aprofundat in urma acestei teme:
- Interfațare Hardware: Am conectat cu succes un LED RGB și mai multe potențiometre la o placă Arduino. Prin intermediul potențiometrelor am permis ajustarea individuală a intensității pentru fiecare culoare a LED-ului. Astfel, am putut crea o gamă largă de culori prin amestecarea intensităților roșu, verde și albastru. 
- Programare Arduino: Am scris codul necesar pentru a citi valorile de la potențiometre și am controlat intensitatea luminii pentru fiecare componentă a LED-ului RGB. Deci,rotind potențiometrul, am modificat rezistența acestuia, ceea ce a influențat valoarea analogică citită de Arduino.
- Utilizare GitHub: Am  adăugat codul într-un repository Git și am actualizat README-ul cu informații despre proiect, o fotografie a configurației și un link către un videoclip demonstrativ.
- Comunicare eficientă a rezultatelor: Prin adăugarea unui videoclip pe o platformă accesibilă, am asigurat o modalitate eficientă de a prezenta funcționalitatea proiectului.

# Homework #3 - Elevator simulator wannabe

Deadline: 31 Octombrie 2023

### [TikTok Video Showcase](https://www.tiktok.com/@tiberiug.dobre/video/7295362196702268705)

#### Componentele utilizate:
- LED-uri (4): Pentru fiecare buton(etaj) am utilizat un LED de culoare rosie, iar pentru a defini in ce stare se afla liftul am utilizat un LED de culoare verde.
- Butoane (3): Fiecare buton reprezinta un etaj.Prin apasarea butonului ne putem "deplasa" la etajul dorit, iar LED-ul asociat fiecarui etaj se va aprinde. 
- Rezistoare(6) si fire: Am utilizat 5 rezistoare de tip PULLUP(5100Ω) pentru a asigura o conexiune corecta pentru butoane. Astfel,fiind rezistoare de tip PULLUP, LED-urile vor functiona atunci cand este actionat butonul.Am mai utilizat un rezistor de 10Ω pentru a-i oferi buzzer-ului un sunet mai placut.
- Buzzer(1): Acesta se ocupa cu emiterea unor zgomote in functie de momentul in care se afla liftul.
- Arduino Board: Placa Arduino este creierul proiectului meu, care face posibila functionarea acestui lift wannabe, fiind programat prin intermediul aplicatiei Arduino.
  
  ![image](https://github.com/Tibisorul/IntroductionToRobotics/assets/127014075/7803b112-c41f-4c0e-ad51-11272b8d31ce)


#### Ce trebuie sa am in vedere:
- Folosirea funcției delay() în loc de millis().
- Utilizarea denumirilor de variabile neprecise, cum ar fi btn1, led1. Optarea pentru denumiri mai descriptive, cum ar fi floor1Button, floor1LED.
- Ignorarea nefolosirii debounce-ului , ceea ce poate duce la mișcări neintenționate ale liftului sau la sunete multiple ale buzzerului.
- Programarea  LED-ul operațional al liftului să clipească atunci când liftul se mișcă.

#### Ce am aprofundat in urma acestei teme:
- Interfatare Hardware: Prin intermediul acestei teme, dar si prin intermediul laboratorului, am realizat necesitatea rezistoarelor de tip PULLUP si PULLDOWN, fiind elemente utile atunci cand dorim sa le utilizam in colaborare cu butoanele.
- Programe Arduino: Am utilizat concepte noi, precum Debounce.

  # Homework #4 - 7 segment display drawing
  
Deadline: 7 Noiembrie 2023

Descrierea temei: Prin intermediul unui Joystick trebuie sa controlam pozitia segmentului si sa il afisam pe placa 7 Segment Display.

### [TikTok Video Showcase](https://www.tiktok.com/@t1bisorul/video/7298326468969483552)

#### Componentele utilizate:
- 7 Segment Display(1): Permite afisarea continutului dorit.
- Joystick(1): Prin intermediul Joystickului putem controla cele 8 segmente ale Display-ului dupa bunul plac.
- Rezistoare(8) si fire: Am utilizat 8 rezistoare fiecare avand 220Ω pentru a asigura o conexiune corecta pentru 7 Segment Display. 
- Buzzer(1): Acesta se ocupa cu emiterea unui zgomot in functie de momentul in care se afla segmentul. Atunci cand segmentul este selectat(adica atunci cand clipeste), buzzerul va scoate sunetul precum in video-ul atasat, iar atunci cand segmentul dorit nu este selectat nu va emite niciun zgomot.
- Arduino Board: Placa Arduino este creierul proiectului meu, care face posibila "desenarea" pe 7 Segment Display, fiind programat prin intermediul aplicatiei Arduino.

  ![image](https://github.com/Tibisorul/IntroductionToRobotics/assets/127014075/8d5b6232-9ad8-456c-9356-52e6c09f53e7)


  #### Sarcina de codare:
- Curățenia codului este crucială, așa că menține-l ordonat.
- Folosește millis() sau micros() și întreruperi în loc de delay().
- Încapsulează codul de mișcare a joystick-ului într-o funcție.
- Simplifică constrângerea între 0 și 9.
- Ia în considerare tabela furnizată pentru mișcările joystick-ului (joy-Moved, etc.).

  #### Ce am aprofundat in urma acestei teme:
- Lucru cu 7 Segment Display: Am câștigat experiență în manipularea și controlul unui afișaj cu 7 segmente, înțelegând cum să afișez informații și să creez efecte vizuale.
- Interacțiunea cu Joystick-ului: Integrarea și gestionarea input-ului de la joystick.Prin intermediul acestuia am putut controla un dispozitiv electronic.

    # Homework #5 - Stopwatch timer
  
Deadline: 14 Noiembrie 2023

Descrierea temei: Prin intermediul unui 4 7 Segment Display trebuie sa construim un cronometru care va avea diferite functii.


https://github.com/Tibisorul/IntroductionToRobotics/assets/127014075/52101023-f5b4-4069-a2e8-dd8b5882b2fb

#### Componentele utilizate:
- 4 7 Segment Display(1): Permite afisarea cronometrului
- Rezistoare(8) si fire: Am utilizat 8 rezistoare fiecare avand 220Ω pentru a asigura o conexiune corecta pentru  4 7 Segment Display.
- Shift Register SN74HC595 (1): Permite serializarea datelor de ieșire și transferul acestora către alte circuite, permițând astfel economisirea de pini pe microcontroler și gestionarea mai eficientă a mai multor dispozitive digitale. 
- Buzzer(1): Acesta se ocupa cu emiterea unui zgomot atunci cand este apasat un buton.
- Arduino Board: Placa Arduino este creierul proiectului meu, care face posibila realizarea unui cronometru pe 4 7 Segment Display, fiind programat prin intermediul aplicatiei Arduino.

  ![image](https://github.com/Tibisorul/IntroductionToRobotics/assets/127014075/9934632d-4208-4c98-8295-7f1cac7566c1)

  #### Cerinte:
- Valoarea initiala a afisajului cu 7 segmente de 4 cifre ar trebui sa fie "000.0". Butonul ar trebui sa aiba urmatoarele functionalitati:
- Butonul 1: Porneste / opreste.
- Butonul 2: Reseteaza (daca este in modul de pauza). Reseteaza tururile salvate (daca este in modul de vizualizare a tururilor).
- Butonul 3: Salveaza turul (daca este in modul de numarare), trece prin tururile salvate anterior (pana la 4 ture).
  
  #### Sarcina de codare:
- Curățenia codului este crucială, așa că menține-l ordonat.
- Folosește millis() sau micros() și întreruperi în loc de delay().
- Nu folosi structuri repetitive  precum while(). Se poate folosi for().

  #### Ce am aprofundat in urma acestei teme:
- Lucru cu 4 7 Segment Display: Am câștigat experiență în manipularea și controlul unui afișaj cu 4 7 segmente, înțelegând cum să afișez informații și să creez efecte vizuale.
- Lucru cu Shift Register: Am realizat importanta acestei componente vitale, deoarece permite extinderea numărului de ieșiri disponibile pe un microcontroler sau alt dispozitiv similar, economisind astfel resursele hardware. De asemenea este important si din punct de vedere al multiplexarii.
  
