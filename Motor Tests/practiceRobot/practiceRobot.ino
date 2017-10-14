#define LEFT 11
#define RIGHT 10
#define BOTH -1
int voltage = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available())
    {
	char input = Serial.read();
	switch(input)
	{
	case 'w':
	    turnMotor(BOTH);
	    break;
	case 'a':
	    turnMotor(RIGHT); //turn left
	    break;
	case 'd':
	    turnMotor(LEFT); //turn right
	    break;
	case 's':
	    voltage = 0;
	    turnMotor(BOTH);
	case 'f':
	    voltage += 50;
	    voltage = min(voltage, 250);
	    break;
	case 'b':
	    voltage -= 50;
	    voltage = max(voltage, 0);
	    break;
	default:
	    break;
	}
    }
}

void turnMotor(int motor)
{
    if(motor == -1)
    {
	analogWrite(LEFT, voltage);
	analogWrite(RIGHT, voltage);
    }
    else
    {
	analogWrite(motor, voltage);
    }
}

/*
 * if(temp >= '0' && temp <= '5'){
 voltage = temp - '0';
 Serial.println(voltage);
 analogWrite(11, voltage*51);
 }
 * if(
 */
