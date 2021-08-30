#include <avr/io.h>//avr library
#include <avr/interrupt.h>//interrupt library

int counts=0;//global variable declaration
void itter()//counter function define
{
	counts+=1;//increment in global variable value
}
ISR (TIMER1_OVF_vect)    // Timer1 ISR, automaticaly run on overflow interrupt
{
	itter();//counter increment function call
	TCNT1 = 49598;   // for 1.02 sec at 16 MHz
}
void setup()//controller setup function define
{
	
	TCCR1A = 0x00;//set for normal mode
	TCCR1B = (1<<CS10) | (1<<CS12);  // Timer1 mode with 1024 prescler
	TIMSK1 = (1 << TOIE1) ;   // Enable timer1 overflow interrupt(TOIE1)
	
	//TCNT1 initial value
	// 16MHz/1024 = 15625 Hz
	// 1/15625Hz = 64 u seconds
	// 1.02 seconds / 64 u seconds = 15937.5 counts (we need this counts for 1.02 second time)
	// TCNT1 is 16 bits, total counts available = 65536 (TCNT1 overflow value)
	//TCNT1 value= 65536 - 15937.5 = 49598.5 = 49598 counts
	
	TCNT1 = 49598;   // for 1.02 sec at 16 MHz
	sei();        // Enable global interrupts by setting global interrupt enable bit in SREG
	
}

int main()
{
	setup();//call setup function

	while(1)//empty because there is no functionality to perform in while
	{
		
	}
}