#define LEDA 0
#define LEDB 1
#define LEDC 2
#define LEDD 3
#define LEDE 4
#define LEDF 5
#define LEDG 6
/*
 * You you can use array to optimize the code as following:
 * int leds[7] = {2, 3, 4, 5, 6, 7, 8};
 */
#define LED 7
#define DELAY_TIME 1000 

void setup()
{
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);
  pinMode(LEDE, OUTPUT);
  pinMode(LEDF, OUTPUT);
  pinMode(LEDG, OUTPUT);
  /*
   * You can use for loop to optimize the code as following: 
   * for(int i = 0; i < 7; i++)
   * {
   *  pinMode(leds[i], OUTPUT);
   * }
   */
  pinMode(LED, OUTPUT);
}

void loop()
{
  even();
  blink(3);
  odd();
  blink(2);
}

void blink(int n)
{
  for(int i = 0; i < n; i++)
  {
    digitalWrite(LED, HIGH);
    delay(DELAY_TIME);
    digitalWrite(LED, LOW);
    delay(DELAY_TIME);
  }
}

void even()
{
  zero();
  delay(DELAY_TIME);
  two();
  delay(DELAY_TIME);
  four();
  delay(DELAY_TIME);
  six();
  delay(DELAY_TIME);
  eight();
  delay(DELAY_TIME);
}

void odd()
{
  one();
  delay(DELAY_TIME);
  three();
  delay(DELAY_TIME);
  five();
  delay(DELAY_TIME);
  seven();
  delay(DELAY_TIME);
  nine();
  delay(DELAY_TIME);
}

void zero()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, LOW);
}

void one()
{
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, LOW);
}

void two()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, LOW);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, HIGH);
}

void three()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, HIGH);
}

void four()
{
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void five()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void six()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}


void seven()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, LOW);
}

void eight()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void nine()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}
