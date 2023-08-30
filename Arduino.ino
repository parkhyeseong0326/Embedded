int A_1A = 7;
int A_2A = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(A_1A, OUTPUT);
  pinMode(A_2A, OUTPUT);
}

void loop()
{
  digitalWrite(A_1A,HIGH);
  digitalWrite(A_2A,LOW);
}
   
