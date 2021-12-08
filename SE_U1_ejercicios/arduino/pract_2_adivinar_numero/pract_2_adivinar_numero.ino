enum ESTADOS { IMPRIMIR_OP, LEER_OP, CALCULAR,  REINICIAR }; // declaracion de variables 
int op = 0; // entrada 
int val = 0; // valor 
int estado = 0;
String ENTRADA; // ==op
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(250);
}

void loop() { 
  switch (estado) {
    case IMPRIMIR_OP:
      Serial.println("ingresa el numero que crees que pienso del 0 al 10");
      estado++;
      break;
    case LEER_OP: // lee la variabe
      if (Serial.available() > 0) {
        ENTRADA = Serial.readString();
        op = ENTRADA.toInt();
        val = random(0, 10);
        estado++;
        Serial.println();
      }
      break;

    case CALCULAR:
      Serial.println("\nResultado:");
 
      if (op == val) {// compara el resultado si es igual es enpate
        Serial.println("GANASTE ¡adivinaste el numero !!!  \n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));

      } else if (op != val){
      

        Serial.println("PERDISTE ¡ eso no era lo que pense  !!! \n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));

      }

   estado++;
  
      break;

    case REINICIAR:
      op = 0;
      ENTRADA = "";
      estado = 0;
      val = 0;
      break;

  }
}
