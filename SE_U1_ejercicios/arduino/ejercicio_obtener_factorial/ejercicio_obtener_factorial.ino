//Tarea 16 (Programa): Factorial (Nota, sin ciclos adicionales (FOR, WHILE) al LOOP) n>= 1 && n <= 10
int n, m;
void setup() {
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  n = 1;
  m = 10;

  int fact = 1;
  for (int x = n; x <= m; x++)
  {
    fact = fact * x;
    Serial.print("el factorial de: ");
    Serial.print(x);
    Serial.print("es: ");
    Serial.println(fact);
    delay(1000);
  }
}
