#define RED 5
#define GREEN 6
#define YELLOW 7
#define PERIOD 500
int redVoltage = 0;
int greenVoltage = 0;
int yellowVoltage = 0;
void setup()
{
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(YELLOW,OUTPUT);
}

void loop( )  
{  
  if(redVoltage == 5)
      redVoltage =0;
  else
      redVoltage+=1;

  if(greenVoltage == 4)
      greenVoltage=0;
   else
      greenVoltage+=2;
  
  if(yellowVoltage == HIGH)
      yellowVoltage = LOW;
  else
    yellowVoltage = HIGH;

  analogWrite(RED,map(redVoltage,0,5,0,255));
  analogWrite(GREEN,map(greenVoltage,0,5,0,255));
  digitalWrite(YELLOW,yellowVoltage);
  delay(PERIOD);
}
