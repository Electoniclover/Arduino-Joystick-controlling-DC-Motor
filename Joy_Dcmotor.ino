int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=100;
int xpin=A0;
int xval;
   
  
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(xpin,INPUT);
   
  Serial.begin(9600);
  delay(1000); 
}
  
void loop() {
  // put your main code here, to run repeatedly:
  xval=analogRead(xpin);
  Serial.println(xval);
  delay(500);
   
  if(xval>800){
    mSpeed=255;
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    analogWrite(speedPin,255);
    delay(25);
    analogWrite(speedPin,mSpeed);
    delay(5000);
  }
   
  if(xval<500){
    mSpeed=255;
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    analogWrite(speedPin,255);
    delay(25);
    analogWrite(speedPin,mSpeed);
    delay(5000);
  }
   
  if(xval>500 and xval<600){
    mSpeed=0;
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    analogWrite(speedPin,255);
    delay(25);
    analogWrite(speedPin,mSpeed);
    delay(5000);
  }
}
