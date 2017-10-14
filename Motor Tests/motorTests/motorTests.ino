int voltage = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available() > 0)
    {
	int temp = Serial.read();
	if(temp >= '0' && temp <= '5')
	{
	    voltage = temp - '0';
	    Serial.println(voltage);
	    analogWrite(11, voltage * 51);
	}
    }
}
