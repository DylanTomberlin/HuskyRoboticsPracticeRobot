#define LEFT 11
#define RIGHT 10
#define BOTH -1
int voltage = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available() > 0){
    char input = Serial.read();
    switch(input){
      case 'w':
        turnMotor(
      break;
      case 'a':
      break;
      case 'd':
      break;
      case 's':
    }
    
  //delay(500);
  }
}

void turnMotor(int motor){
  
}

/*
 * if(temp >= '0' && temp <= '5'){
      voltage = temp - '0';
      Serial.println(voltage);
      analogWrite(11, voltage*51);
    }
 * if(
 */
