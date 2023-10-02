int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  Serial.println("\n");  
}

void loop() {
  Serial.println(i); 
  digitalWrite(13,HIGH); //light on
  delay(1500); //increased delay 1.5seconds 

  // make 1 second delay
  digitalWrite(13,LOW); //light off
  delay(1000);
  i++;
  
}
