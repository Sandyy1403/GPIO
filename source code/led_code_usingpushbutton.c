#include "sandy.h"
int main() 
{   
  volatile char  x;
  portf(0x01); 
  portink(0x00);
  while(1)
  {
    x =portkread();
    if((x&0x01)==0x01)
    {
      portfout(0x01);
    }
    else
    {  
         portfout(0x00);
    }
  }


  // put your setup code here, to run once:

}

 