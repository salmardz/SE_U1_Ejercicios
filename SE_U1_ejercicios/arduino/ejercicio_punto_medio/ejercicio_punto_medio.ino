//Tarea 20 (Programa): Punto Medio entre dos puntos
//      P1 (X1, Y1)
//      P2 (X2, Y2)
// PMX = (X1 + X2) / 2
// PMY =  (Y1 + Y2) / 2
//variables
int x1, x2;
int y1, y2;
 double PMX, PMY;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(" ingrese el punto P1:");

  Serial.println(" ingrese X1:");
  while (Serial.available() == 0) {
  }
  x1  = Serial.parseInt();

  Serial.print("Ingrese Y1 ");
  while (Serial.available() == 0) {
  }
  y1  = Serial.parseInt();

  Serial.println(" ingrese el punto P1:");
  Serial.println(" ingrese X2:");
  while (Serial.available() == 0) {
  }
  x2  = Serial.parseInt();


  Serial.println(" ingrese Y2:");
  while (Serial.available() == 0) {
  }
  y2  = Serial.parseInt();
// PMX = (X1 + X2) / 2
PMX = (x1+x2)/2;
//       PMY =  (Y1 + Y2) / 2
PMY = (y1+y2)/2;

// MOSTRAR RESULTADO
  Serial.println("la punto medio es X3: "+String(PMX)+ "Y3: "+String (PMY)+".");
  delay(100);

}
