int red=9, green=10,blue=11;
int k=0,y=0,m=0;
int trig = 6, echo=5;    
long zaman;
long mesafe; 
void setup(){
  pinMode(trig, OUTPUT); 
  pinMode(red, OUTPUT); 
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);  
  pinMode(echo,INPUT); 
  Serial.begin(9600); 
}
void loop()
{
  digitalWrite(trig, LOW); 
  delayMicroseconds(5);
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trig, LOW);  
  zaman = pulseIn(echo, HIGH);
  mesafe= (zaman /29.1)/2;   
  Serial.println(mesafe); 
  if(mesafe<10)
  {
    k=random(0,255);
    y=random(0,255);
    m=random(0,255);
    analogWrite(red,k);
    analogWrite(blue,m);
    analogWrite(green,y);
    delay(1000);
  }
  else
  {
    analogWrite(red,0);
    analogWrite(blue,0);
    analogWrite(green,0);
  }   
}
