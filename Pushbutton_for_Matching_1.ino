
int pin8;


void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
    
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  pin8 = digitalRead(8);
  if (pin8 == HIGH) {
    Serial.println("Eight was pressed");
  }
  delay(100);
  

}
