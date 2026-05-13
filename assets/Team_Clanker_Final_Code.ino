
#include <avr/io.h>   //input definitions for input and output registers
#include <util/delay.h>   //include delay function for _delay_ms()

//declare all movement functions for later use
void front(void);
void back(void);
void right(void);
void left(void);
void stop(void);
void wideright(void);
void wideleft(void);

int main(void) {
DDRB |= 0b00001111;   //set ports B0-B3 as outputs (for motors)
DDRD = 0b00000000;    //set all D pins as inputs (for button sensing)

while (1) {
//button start system (code runs before robot countdown and robot starts on button press)
if (!(PIND & 0b00000100)){    //if pin D3 detects a low input, run movement path 

//Hard coded movement path is below

front();      //move forward
_delay_ms(1050);   //for 1.05 seconds

wideright();   //turn right
_delay_ms(745);   //~110 degrees

front();      //move forward
_delay_ms(950);   //for 0.95 seconds

wideright();    //turn right
_delay_ms(800);   //90 degrees (the delay is higher than before but this is what worked in testing)

front();       //move forward
_delay_ms(975);    //for 0.975 seconds  

stop();        //stop motors
_delay_ms(100000);   //for 1.67 minutes (enough time for the match to end)
  }
}
}

//define all movement functions for use in the movement path above
void front(void) {    //move forward
PORTB = (PORTB & 0b11110000) | 0b00001001;  //ports B3 and B0 high = both motors forward
}

void back(void) {     //move backward (unused in final path)
PORTB = (PORTB & 0b11110000) | 0b00000110;  //ports B2 and B1 high = both motors backward
}

void left(void) {     //turn sharp left (unused in final path)
PORTB = (PORTB & 0b11110000) | 0b00001010;  //ports B3 and B1 high = right motor forward, left motor backward
}

void right(void) {    //turn sharp right (unused in final path)
PORTB = (PORTB & 0b11110000) | 0b00000101;  //ports B2 and B0 high = right motor backward, left motor forward
}

void stop(void) {    //stop motors
PORTB = (PORTB & 0b11110000);  //all ports low = both motors stopped
}

void wideright(void) {    //turn right
PORTB = (PORTB & 0b11110000) | 0b00000001;  //port B0 high = right motor stopped, left motor forward
}

void wideleft(void) {    //turn left (unused in final path)
PORTB = (PORTB & 0b11110000) | 0b00001000;  //port B3 high = right motor forward, left motor stopped
}