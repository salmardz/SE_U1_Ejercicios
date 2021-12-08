  //Tarea 15 (Programa): Promedio de 5 numeros

//variables 
int numero;
int suma;
int promedio ;
String ms1 = "Ingrese un numero: ";
String ms2 = "El promedio es: ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  Serial.println("ingrese un numero para obtener el promedio");

  for (int i = 0; i < 5; i++){// interaciones asta 5
    
    while (Serial.available() == 0) {
    }
      numero = Serial.parseInt();
      Serial.print(ms1);
      Serial.println(numero);
      suma += numero;

    }
    //promedio es 
     promedio = suma /5;
     Serial.print(ms2);
      Serial.println(promedio);
  delay(100);

}
