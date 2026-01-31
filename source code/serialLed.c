//use the main header
// serial led
#include "sandy.h"
void setup() 
{  
  portink(0xff);
  // put your setup code here, to run once:

}

void loop() 
{  
 volatile char x;
  x=0x01;
  volatile long i;
  volatile long j;
  //serial blink;
  for(i=0;i<8;i++)
  {
     out1(x<<i);
     delay();
  }
  x=0x01;
  char x1=0x00;
  for(j=0;j<8;j++)
  {
     x1=x1|(x<<j);
     out1(x1);
     delay();
  }
  // put your main code here, to run repeatedly:

}
