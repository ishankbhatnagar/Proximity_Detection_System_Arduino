/*
Team members:
Ishank Bhatnagar - 21BCT0097
Adithya Gattadi - 21BCT0146
Ekta Biju - 21BCT0321
Bhavya Raitani - 21BCT0092
Guru Charan Varma - 21BCT0118
*/

int Distance = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
  Distance = 0.01723 * readUltrasonicDistance(10, 9);
  Serial.println(Distance);
  if (Distance < 18) 
  {
    tone(3,523,1000);
    delay(500); 
  } 
  else 
  {
    noTone(3);
    delay(500);
  }
}