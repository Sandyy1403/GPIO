//use main_header.c
 #include "sandy.h"
void setup() 
{  
  sandy(0xff);
  
}
void loop()
{
  char x;
 volatile long i;
  x=0b0000001;
  out1(x);
  for(i=0;i<60000;i++);
  x=0b0000000;
  out1(x);
  for(i=0;i<60000;i++);
  
}