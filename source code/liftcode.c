#include "sandy.h"
int main()
{
   portf(0xff);
   portink(0xf0);
   char x;
   int a=0;
   int b=0;
   segmentwo(a);
   led1(b);
   while(1)
   {
      x=portkread();
      if((x&0x01)==0x01)
      {   
          
          if(a>0)
          {
          for(int i=a;i>=0;i--)
             {
              segmentwo(i);
              led1(i);
              delay();
             }
          }
          segmentwo(0);
           a=0;
      }
       if((x&0x02)==0x02) 
      {
        if(a<1)
        {
          for(int i=a;i<=1;i++)
          {  
            segmentwo(i);
            led1(i);
            delay();
          }
        }
        else if(a>1)
          for(int i=a;i>=1;i--)
             {
              segmentwo(i);
              led1(i);
              delay();
             }
        a = 1;
      }
       else if((x&0x04)==0x04) 
      {
        if(a<2)
        {
          for(int i=a;i<=2;i++)
          {  
            segmentwo(i);
            led1(i);
            delay();
          }
        }
        else if(a>2)
        {
             for(int i=a;i>=2;i--)
             {
              segmentwo(i);
              led1(i);
              delay();
             }
        }
        a = 2;
      }
       else if((x&0x08)==0x08) 
      {
        if (a<3)
        {
          for(int i=a;i<=3;i++)
          {
            segmentwo(i);
            led1(i);
            delay();
          }
        }
        a = 3;
     }
     

   }  
}