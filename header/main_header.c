#define portink1 (*(volatile char *)0x107)
#define portoutk1 (*(volatile char *)0x108)
#define portfinf1 (*(volatile char *)0x30)
#define portfoutf1 (*(volatile char *)0x31)
void sandy(volatile char t)
{
    
   portink1=t;
   portfinf1=t;
}

void out1(char b)
{
 
   portoutk1=b;
}
void delay()
{
  volatile long i;
  for(i=0;i<60000;i++);
}
void segment(int x)
{
  int arr[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  portoutk1=arr[x];
}
void segmentwo(int c)
{
  int arr[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  portfoutf1=arr[c];
}