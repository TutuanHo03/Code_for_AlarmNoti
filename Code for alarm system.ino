#define sensorpir 3
#define led 7
int tonePin = 2;

void pip(){
  tone(tonePin, 587, 200);
}

void setup()
{
  pinMode(sensorpir,INPUT);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
Serial.println(digitalRead(sensorpir)); 
  //HIGH = có vật KHÔNG CHUYỂN ĐỘNG, LOW = CÓ VẬT CHUYỂN ĐỘNG.
  if(digitalRead(sensorpir)==LOW){
    digitalWrite(led, HIGH);
    pip();
    
  }
  else if(digitalRead(sensorpir)==HIGH){
    digitalWrite(led, LOW);
  }
}
