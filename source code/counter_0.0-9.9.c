#include "sandy.h"
int main()
{  
  
  volatile char v;
  volatile long i;
  volatile long j;
  volatile long x;
  volatile int c=0;
  while(1)
  {
    portf(0xff);
  for(i=0;i<10;i++)
  {   
    for(j=0;j<10;j++)
    { 
      c=0;
       while(c<300)
       {
           portink(0x02);
           portoutk(0x02);
           segmentdot(i);
            portink(0x01);
            portoutk(0x01);
            segmentwo(j);
            for(x=0;x<700;x++);
          c++;
   }
  }
  }
   
  }
}