/*
No olviden suscribirse a mi canal y seguir mi pagina de Facebook:
https://www.facebook.com/EduElectronicsRobotica
https://www.youtube.com/@EduElectronics


Les recuerdo que para abrir de manera correcta este codigo deben abrirlo desde el archivo
llamado "IK_Vid.ino" que debe estar en la carpeta del mismo nombre, y en esa carpeta 
deben estar con archivos ik_.ino y print.ino para tener todo el programa completo,
podrán ver los tres archivos en tres distintas tabs o pestañas del IDE Arduino
*/

void Print(){
  Serial.print(hipoXY);
  Serial.print("    ");
  Serial.print(lineaAlfa);
  Serial.print("    ");
  Serial.print(gamma);
  Serial.print("    ");
  Serial.print(alfa);
  Serial.print("    ");
  Serial.println(beta);
}