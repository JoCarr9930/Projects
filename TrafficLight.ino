int red = 13;
int yellow = 12;
int green = 11;

int regular = 12000;
int quick = 6000;

void setup() 
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  //Red light
  digitalWrite(red,HIGH);
  delay(regular);
  digitalWrite(red,LOW);

  //Green light
  digitalWrite(green,HIGH);
  delay(regular);
  digitalWrite(green,LOW);

  //Yellow light
  digitalWrite(yellow,HIGH);
  delay(quick);
  digitalWrite(yellow,LOW);
  
}
