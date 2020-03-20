
int ledpin = 5;


void setup() {
  // put your setup code here, to run once:

//Serial.begin(9600);
pinMode(ledpin,OUTPUT);

 
}

void loop() {
  // put your main code here, to run repeatedly:

//Serial.println("man mamadam");
 digitalWrite(ledpin,HIGH);
 delay (500);

 digitalWrite(ledpin,LOW);
 delay (500);

}
