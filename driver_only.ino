char val;

void setup() {
pinMode(2,OUTPUT);    //left wheel
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);    //right wheel
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
if (Serial.available())
{
  val = Serial.read();
}
  if (val == 'F')
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }

  else if (val == 'B')
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }
   else if (val == 'R') //
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }

  else if (val == 'L') //
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }

  else if (val == 'S')
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }

}


