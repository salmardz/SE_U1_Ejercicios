  //Tarea 18 (Programa): Potencia de un número (X a la Y)
//variables 
float resultado;
float base ;
float exponente ;

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(" ingrese la base:");
    while (Serial.available() == 0) {
    }
      base  = Serial.parseInt();
      
      Serial.print("Ingrese el exponente ");
     while (Serial.available() == 0) {
    }
    exponente  = Serial.parseInt();
    resultado = pow(base, exponente);
     Serial.print("la potencia es :");
      Serial.println(resultado);
  delay(100);

}
