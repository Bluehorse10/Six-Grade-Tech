
int pin8;
int pin2;
int pin3;
int pin4;
int pin5;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT); 
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pin8 = digitalRead(8);
  if (pin8 == HIGH) {
    Serial.println("Eight was pressed");
  }
  delay(100);

  pin2 = digitalRead(2);
  if (pin2 == HIGH) {
    Serial.println("Two was pressed");
  }
  delay(100);


pin3 = digitalRead(3);
  if (pin3 == HIGH) {
    Serial.println("Three was pressed");
  }
  delay(100);

pin4 = digitalRead(4);
  if (pin4 == HIGH) {
    Serial.println("Four was pressed");
  }
  delay(100);

pin5 = digitalRead(5);
  if (pin5 == HIGH) {
    Serial.println("Five was pressed");
  }
  delay(100);






}









