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
