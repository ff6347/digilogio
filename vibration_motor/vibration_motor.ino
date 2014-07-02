int potpin = A0;
int transistorpin = 12;


void setup(){

  pinMode(transistorpin,OUTPUT);

}

void loop(){
int potval = analogRead(potpin);

if(potval < 200){
  // vibration 1

}else if(potval >= 200 && potval < 400){
  // vibration 2
  digitalWrite(transistorpin, HIGH);
  delay(1000);
  digitalWrite(transistorpin, LOW);
  delay(1000);
}else if(potval >= 400 && potvla < 600){
  // vibration 3
} else if(potval >=600 && potval < 800){
  // vibration 4
}else{
  // vibration 5
}

}
