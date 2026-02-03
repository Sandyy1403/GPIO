#define portink1 (*(volatile char *)0x107)
#define portkpinread (*(volatile char *)0x106)
#define portoutk1 (*(volatile char *)0x108)
#define portfinf1 (*(volatile char *)0x30)
#define portfoutf1 (*(volatile char *)0x31)
#define portina1 (*(volatile char *)0x21)
#define portouta1 (*(volatile char *)0x22)
#define portinc1 (*(volatile char *)0x27)
#define portoutc1 (*(volatile char *)0x28)
#define portinb1 (*(volatile char *)0x24)
#define portoutb1 (*(volatile char *)0x25)
void portina(char c)
{
  portina1=c;
}
void portouta(char x)
{
  portouta1=x;
}
void portinb(char x)
{
  portinb1=x;
}
void portinc(char x)
{
   portinc1=x;
}
void portoutc(char x)
{
   portoutc1=x;
}
void portf(char t)
{
  portfinf1=t;
}
void portink(volatile char t)
{
  portink1=t;
}
char portkread()
{
  // char *x;
  // x=0x106;
  return portkpinread;
}
void portoutk(volatile char t)
{
  portoutk1=t;
}
void portfout(char t)
{
  portfoutf1=t;
}
void out1(char b)
{
 
   portoutk1=b;
}
void segmentb1(int x)
{
  // int arr[3][3]={0x06,0x5B,0x4F,
  //                0x66,0x6D,0x7D,
  //                0x07,0x7F,0x6F};
  int arr[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  portoutb1=arr[x];
}
void delay()
{
  volatile long i;
  for(i=0;i<300000;i++);
}
void segmentb4(int x)
{
  int arr[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  portoutb1=arr[x];
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
void segment1()
{
  int arr[1]={0x3f};
  for(volatile int i=0;i<=0;i++)
  {
     portfoutf1=arr[i];
     break;
  }
}
void led1(int c)
{
  int arr[10]={0b00010000,0b00100000,0b01000000,0b10000000};
  portoutk1=arr[c];
}
 
 