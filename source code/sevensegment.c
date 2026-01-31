#include "sandy.h"
void setup() 
{  
  portink(0xff);
  // put your setup code here, to run once:

}

void loop() 
{  
  volatile char v;
  volatile long i;
  volatile long x;
  volatile char c;
  x=0b01111111;
  // count binary number.
  for(x=0;x<=8;x++)
  {   
     segment(x);
     delay();
  }

  
  // put your main code here, to run repeatedly:

}