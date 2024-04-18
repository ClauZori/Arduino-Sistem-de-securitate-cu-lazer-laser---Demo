#define laser 2
#define sensor 3
#define LEDV 10
#define LEDR 9

int buzzer = 13 ;

void setup ()
{
  Serial.begin(9600);
  pinMode(LEDV,OUTPUT);
  pinMode(LEDR,OUTPUT);
  pinMode(laser,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);

  digitalWrite(laser,HIGH);
}

void loop()
{
  bool value=digitalRead(sensor);
  Serial.write(digitalRead(sensor));
  
 unsigned char i, j ;
if (value == 1)
{
for (i = 0; i <100; i++) // When a frequency sound
{
digitalWrite (buzzer, HIGH) ; //send tone
delay (1) ;
digitalWrite (buzzer, LOW) ; //no tone
delay (1) ;
}





for (i = 0; i <80; i++)
{
digitalWrite (buzzer, HIGH) ;
delay (2) ;
digitalWrite (buzzer, LOW) ;
delay (2) ;
}
digitalWrite (LEDV, LOW) ;
digitalWrite (LEDR, HIGH);
}
else
{
  digitalWrite (LEDV, HIGH) ;
  digitalWrite (LEDR, LOW);
}
}
