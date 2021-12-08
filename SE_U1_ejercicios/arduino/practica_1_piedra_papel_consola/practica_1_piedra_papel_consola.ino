enum ESTADOS { IMPRIMIR_OP, LEER_OP, CALCULAR,  REINICIAR };
int op = 0; // entrada 
int val = 0; // salida 

int estado = 0; // contador
String ENTRADA; // ingreso del usario 
void setup() {
    // put your setup code here, to run once:                                                                               
  Serial.begin(9600);
  Serial.setTimeout(250);
}

void loop() {
  switch (estado) {  // imprimir en pantalla el mensaje 
    case IMPRIMIR_OP: 
      Serial.println("Piedra papel o Tijera");
      Serial.println("0.-Piedra");
      Serial.println("1.-Papel");
      Serial.println("2.-Tijera");
      estado++;
      break;

    case LEER_OP: // leer la variabe 
      if (Serial.available() > 0) {
        ENTRADA = Serial.readString();
        op = ENTRADA.toInt(); // guarda en el auxiliar op
        val = random(0, 3); // el num aleatorio entre el 0 y 3
        estado++;
        Serial.println();
      }
      break;

    case CALCULAR: // operacion 
      Serial.println("\nResultado:");
      if (val==0){ // van a mostrar la cadena 
              Serial.println("Arduino uno:" + String(val)+": Piedra");// salida del resultado
      }
      if (val==1){
              Serial.println("Arduino uno:" + String(val)+": Papel");
      }
      if (val==2){
              Serial.println("Arduino uno:" + String(val)+": Tijera"); // concatena el numero con la cadena 
      }

      // codiciones 
      if (op == val) {// compara el resultado si es igual es enpate

        Serial.println("Empate!!!  \n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));// cadena con el valor de arduino y el usario 


      } else if (val == 0 and op == 1) {// si el valor es diferente entre o y 1

        Serial.println("Me Ganaste!!! \n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));

      }
      else if  (val == 1 and op == 2) { // gana el usuario
        Serial.println("Me Ganaste!!! \n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));

       
      }
      else if (val == 2 and op == 0) {//gana el usuario
        Serial.println("Me Ganaste!!!\n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));
      }
      else {
        Serial.println("Te Gane!!! :D\n");
        Serial.println("Arduino: " + String(val)+" vs "+" usuario: "+String(op));

        
      }
      estado++;
  
      break;

    case REINICIAR: // se repite el ciclo
      op = 0;
      ENTRADA = "";
      estado = 0;
      val = 0;
      break;

  }
}
