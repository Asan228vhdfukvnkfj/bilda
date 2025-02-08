void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
}
/*
 * 4 clockwire Right           in4 
 * 5  conter clockwire Right   in3
 * 6  clockwire Left           in2
 * 7  conter clock wire Left   in1
 * 
 */
void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(3,HIGH);
  digitalWrite(9,HIGH);
  
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(3,HIGH);
  digitalWrite(9,HIGH);
  
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(3000);
}
