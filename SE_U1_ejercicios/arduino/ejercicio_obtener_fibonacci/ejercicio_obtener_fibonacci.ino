//Tarea 16 (Programa): Factorial (Nota, sin ciclos adicionales (FOR, WHILE) al LOOP) n>= 1 && n <= 10
int s[10] ;
void setup() {
  Serial.begin(9600);
  for (int x = 0; x < 10; x++) {
    if (x == 0 or x == 1) {
      s[0] = 0; s[1] = 1;
    }
    else {
      s[x] = s[x - 1] + s[x - 2];
    }

    Serial.println(s[x]);
  }
}

void loop() {

}
