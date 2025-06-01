// C++
int t = 150; 

void setup()
{
 DDRD = 0b11111111;
}

void loop()
{
PORTD = 0b00000001; 
delay (t);

PORTD = 0b00000010; 
delay (t) ;

PORTD = 0b00000100;
delay (t);

PORTD = 0b00001000;
delay (t);

PORTD = 0b00010000;
delay (t);

PORTD = 0b00100000;
delay(t);

PORTD = 0b01000000;
delay (t);

PORTD = 0b10000001;
delay (t);
}