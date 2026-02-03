// use main header
#include "sandy.h"
int main() 
{   
  volatile char  x;
  portf(0xff); 
  portink(0x00);
  while(1)
  {
    x =portkread();
    if((x&0x01)==0x01)
    {
      portfout(0xff);
    }
    else
    {  
         portfout(0x00);
    }
  }


  // put your setup code here, to run once:

}
