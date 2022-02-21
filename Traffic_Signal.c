#include <p24fj128ga010.h>
#include"config.h"


int main(void) {
TRISA=0xFF88; //RA0-2 and RA4-6 will be set as output TRISD= 0x2020; //RD6 and RD13 is set as input
while (1) {
if(PORTDbits.RD13==0){ //if conditions for normal mode is satisfied PORTA=0x0011; //set RA0 AND RA4 ON
Delay(1000);
PORTA=0X0041; //set RA6 AND RA0 ON
int i;
for( i=1; i<=8; i++){
Delay(1000); // time delay for 8 sec
}
PORTA=0x0021; //set RA5 AND RA0 ON for( i=1; i<=4; i++){
Delay(1000); //time delay for 4secs
}
PORTA=0x0011; //set RA0 AND RA4 ON Delay(1000);
PORTA=0x0014; //set RA2 AND RA4 ON for( i=1; i<=8; i++){
Delay(1000); //time delay 8 seconds
}
PORTA=0x0012; //set RA1 AND RA4 ON for(i=1; i<=4; i++){
Delay(1000); //time delay 4 seconds
}
}
else { //conditions for flashing mode PORTA=0x0000; //all off Delay(1000); //one second delay
PORTA=0x0041; //RA6 and RA0 on Delay(1000); }
}
return 0;
}
