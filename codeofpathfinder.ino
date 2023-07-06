#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enA 10
#define enB 5


int M1_speed = 80;
int M2_speed = 80;
int LeftRotationSpeed = 250;
int RightRotationSpeed = 250;


void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);

pinMode(A0,INPUT);
pinMode(A1,INPUT);
// put your setup code here, to run once:

}

void loop() {
  int LEFT_SENSOR = digitalRead(A0);
  int RIGHT_SENSOR = digitalRead(A1);
  if(RIGHT_SENSOR==0 && LEFT_SENSOR==0){forward();}
  else if(RIGHT_SENSOR==0 && LEFT_SENSOR==1){right();}
  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==0){left();}
  
  
  
  // put your main code here, to run repeatedly:

}
void forward()
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);


  analogWrite(enA,M1_speed);
    analogWrite(enB,M2_speed);
  
}
void right()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);


  analogWrite(enA,LeftRotationSpeed);
    analogWrite(enB,RightRotationSpeed);
  
}
void left()
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);


  analogWrite(enA,LeftRotationSpeed);
    analogWrite(enB,RightRotationSpeed);
  
}
