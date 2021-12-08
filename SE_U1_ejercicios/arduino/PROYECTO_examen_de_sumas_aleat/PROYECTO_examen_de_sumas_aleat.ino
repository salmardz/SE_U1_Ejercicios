// mostrar en pantalla 10 iteraciones y contestar la suma  que se genere

//variables

int respuesta;
int a, b;
int puntaje;
int suma;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  Serial.println("conteste las siguientes 10 operaciones de manera correcta ");

  for (int i = 0; i < 10; i++) { // interaciones 1 asta 10
    a = random(0, 100);  // genera un numero aleatorio
    b = random (0, 100);

    Serial.println("Obtener la suma de:" + String (a) + "+" + String (b) + " el resutado es ....?");

    while (Serial.available() == 0) {
    }
    respuesta = Serial.parseInt(); // introduce la respueta
    Serial.print("respuesta "); // lo que escribio el usario
    Serial.println(respuesta);
    suma = a + b;
    if (respuesta == suma) {
      puntaje++;
      Serial.println("correcto ! muy bien !!! ");
    } else {
      Serial.println("Incorrecto ! estuvo cerca !!! ");
    }
  }


// vienen los resultados del examen 
  if (puntaje == 10) {
    Serial.print("felicidades acerto de manera correcta todas");
    Serial.println("la respuestas correctas fueron ...");
    Serial.println(puntaje);
  } else {
    Serial.println("¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡uyy estuvo cerca vuelva a intentar !!!!!!!!!!!!!! ");
    Serial.println("la respuestas correctas fueron ...");
    Serial.println(puntaje);
  }

  delay(100);

}
