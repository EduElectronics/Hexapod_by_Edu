/*
No olviden suscribirse a mi canal y seguir mi pagina de Facebook:
https://www.facebook.com/EduElectronicsRobotica
https://www.youtube.com/@EduElectronics


Les recuerdo que para compilar de manera correcta este código deben abrirlo desde el archivo
llamado "IK_Vid.ino" que debe estar en la carpeta del mismo nombre, y en esa carpeta 
deben estar con archivos ik_.ino y print.ino para tener todo el programa completo,
podrán ver los tres archivos en tres distintas tabs o pestañas del IDE Arduino
*/


double ejeX = 74.94;
double ejeY = 67.28;
double ejeZ = 0;

double gamma, alfa, beta, hipoXY, lineaAlfa, desfaceZ = 60;

#define COXA 28
#define FEMUR 90
#define TIBIA 136

void setup() {
  Serial.begin(9600);
}

void loop() {

  hipoXY = HipoXY(ejeX,ejeY);
  lineaAlfa = LineaA(desfaceZ, hipoXY, COXA);

  gamma = Gamma(ejeY, ejeX);
  alfa = Alfa(desfaceZ, lineaAlfa, TIBIA, FEMUR);
  beta = Beta(lineaAlfa, TIBIA, FEMUR);

  Print();
}



