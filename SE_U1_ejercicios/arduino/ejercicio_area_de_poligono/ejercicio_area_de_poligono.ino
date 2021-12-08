#include<math.h>

//Tarea 19 (Programa): Área de un Poligono Regular de 5 o más lados (Pedir lado del poligono y su apotema)
//  A = Perimetro(P) * Apotema / 2
//    P = Lado * NumLadosPoligono
float resultado;
float lado ;
float apotema ;
double angulo;
float l;
double tanAngulo;
double convertir;
double perimetro;
double area;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(" ingrese los lados:");
  while (Serial.available() == 0) {
  }
  lado  = Serial.parseInt();

  Serial.print("Ingrese el apotema ");
  while (Serial.available() == 0) {
  }
  apotema  = Serial.parseInt();

  // OPERACIONES: PERIMETRO
  // paso 1 obtener la logitud de sus lados del poligono
  //ang = 360/(2*n)

  angulo = (360 / (2 * lado));
  tanAngulo = atan(angulo);
  convertir =  (tanAngulo / 2);
  l = (2 * apotema ) * convertir;

  // perimetro
  perimetro = lado * l;
  area = (perimetro * apotema) / 2;
  //medida del apotema
  // f1 : l = 2a*tam(ang)
  // medida del lado

  Serial.print("el perimetro es :");
  Serial.println(perimetro);
  Serial.print("el area es :");
  Serial.println(area);
  delay(100);

}
