/*
No olviden suscribirse a mi canal y seguir mi pagina de Facebook:
https://www.facebook.com/EduElectronicsRobotica
https://www.youtube.com/@EduElectronics


Les recuerdo que para compilar de manera correcta este código deben abrirlo desde el archivo
llamado "IK_Vid.ino" que debe estar en la carpeta del mismo nombre, y en esa carpeta 
deben estar con archivos ik_.ino y print.ino para tener todo el programa completo,
podrán ver los tres archivos en tres distintas tabs o pestañas del IDE Arduino
*/


void control(){
    while (Serial.available() > 0) {
    String str1 = Serial.readStringUntil('A');
    data1 = str1.toInt();
    String str2 = Serial.readStringUntil('B');
    data2 = str2.toInt();
    String str3 = Serial.readStringUntil('C');
    data3 = str3.toInt();
    String str4 = Serial.readStringUntil('D');
    data4 = str4.toInt();
    String str5 = Serial.readStringUntil('E');
    data5 = str5.toInt();
    String str6 = Serial.readStringUntil('\n');
    data6 = str6.toInt();
  }

  //------------------------------------------
  /*  Serial.print(data1);
    Serial.print("  ");
    Serial.print(data2);
    Serial.print("  ");
    Serial.print(data3);
    Serial.print("  ");
    Serial.print(data4);
    Serial.print("  ");
    Serial.print(data5);
    Serial.print("  ");
    Serial.println(data6);
*/
}