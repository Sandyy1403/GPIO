//count binary
//use main_header
#include "sandy.h"
void setup() 
{  
  sandy(0xff);
  // put your setup code here, to run once:

}

void loop() 
{  
  volatile char v;
  volatile long i;
  volatile long x;
  volatile char c;
  // count binary number.
  for(x=0;x<255;x++)
  {   
     out1(x);
    delay();
  }

  
  // put your main code here, to run repeatedly:

}
