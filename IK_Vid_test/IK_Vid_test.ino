/*
No olviden suscribirse a mi canal y seguir mi pagina de Facebook:
https://www.facebook.com/EduElectronicsRobotica
https://www.youtube.com/@EduElectronics


Les recuerdo que para compilar de manera correcta este código deben abrirlo desde el archivo
llamado "IK_Vid.ino" que debe estar en la carpeta del mismo nombre, y en esa carpeta 
deben estar con archivos ik_.ino y print.ino para tener todo el programa completo,
podrán ver los tres archivos en tres distintas tabs o pestañas del IDE Arduino
*/

#include <Servo.h>

Servo coxa;
Servo femur;
Servo tibia;

double ejeX = 0;
double ejeY = 0;
double desfaceZ = 80;

double gamma, alfa, beta, hipoXY, lineaAlfa, ejeZ;

#define COXA 28
#define FEMUR 90
#define TIBIA 136

int data1 = 127;  //ejeX
int data2 = 127;  //ejeY
int data3 = 0;    // boton A
int data4 = 0;    // boton B
int data5 = 0;    // boton C
int data6 = 0;    // boton D
 
byte t = 0;


void setup() {
  Serial.begin(9600);
  coxa.attach(2);
  femur.attach(3);
  tibia.attach(4);
}

void loop() {

  control();

  ejeX = map(data1, 0, 255, 118-50, 118+50);

  ejeY = map(data2, 0, 255, -50, 50);


  hipoXY = HipoXY(ejeX, ejeY);
  lineaAlfa = LineaA(desfaceZ, hipoXY, COXA);
  
  gamma = Gamma(ejeY, ejeX);
  alfa = Alfa(desfaceZ, lineaAlfa, TIBIA, FEMUR);
  beta = Beta(lineaAlfa, TIBIA, FEMUR);
  
  coxa.write(gamma + 90);
  femur.write(alfa);
  tibia.write(map(beta, 0, 180, 180, 0) );


  Serial.print(ejeX);
  Serial.print("    ");
  Serial.print(ejeY);
  Serial.print("    ");
  Serial.print(gamma);
  Serial.print("    ");
  Serial.print(alfa);
  Serial.print("    ");
  Serial.println(beta);


  delay(50);
  //Print();
}

