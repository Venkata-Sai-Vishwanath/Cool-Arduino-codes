int R;
int S;  
const int ENA = 3;
const int IN1=2;
const int IN2=4;


void setup() 
{
    pinMode(3,OUTPUT); 
    pinMode(6,INPUT); 
    pinMode(7,INPUT);
    pinMode(13,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(4,OUTPUT);

}

void loop() { 
  R = digitalRead(6);  
  S = digitalRead(7);
  if(S == HIGH) 
  {
      forward();
      digitalWrite(13,HIGH); 
  }
  else
  {
    stop(); 
  } 
}

void forward()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 80);
}

void stop()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 55);
} 

