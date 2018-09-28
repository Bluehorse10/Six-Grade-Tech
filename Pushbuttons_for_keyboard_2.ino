
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
   ,
  }
  
  
  pin2 = digitalRead(2);
  if (pin2 == HIGH) {
    tone(10, 117, 250);
  }
 

pin3 = digitalRead(3);
  if (pin3 == HIGH) {
    tone(10, 104, 250);
  }
  
pin4 = digitalRead(4);
  if (pin4 == HIGH) {
    tone(10,98, 250);
  }
  
pin5 = digitalRead(5);
  if (pin5 == HIGH) {
    tone(10, 88, 250);
  }
 















}



























