
int voltage = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available() > 0){
    int temp = Serial.read();
    if(temp >= '0' && temp <= '5'){
      voltage = temp - '0';
      Serial.println(voltage);
      analogWrite(11, voltage*51);
    }
    
  //delay(500);
  }
}

/*
 * 
 * if(
 */
