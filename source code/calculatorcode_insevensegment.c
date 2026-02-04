#include "sandy.h" 
 int main()
 {
      portf(0xff);
      portink(0x00);
      portina(0xff);
       
      volatile  char x;
      volatile long i;
      portinc(0xff);
      portinb(0xff);
      int arr[2];
      int t=0;
      int arr1[100];
      int t1=0;
      int sum=0;
      char b3;
      while(1)
      {
        for(i=0;i<4;i++)
       {  
        volatile char v=1<<i;
          portfout(v);
          x=portkread();
          portouta(x);
          if(x!=0x00)
          {  
             volatile char b=(1<<i);
             portoutc(b);
             if((v==0x01)&&(x==0x08))
             {   
               b3='+';
                arr[t]=sum;
                t++;
                sum=0;
                 
             }
            else if((v==0x02)&&(x==0x08))
             { 
                b3='-';
                arr[t]=sum;
                t++;
                sum=0;
             }
             else if((v==0x04)&&(x==0x08))
             {
                b3='*';
                arr[t]=sum;
                t++;
                sum=0;
                 
             }
             else if((v==0x08)&&(x==0x08))
             {
               b3='/';
               arr[t]=sum;
               t++;
               sum=0;
             }
             else if(v==0x01)
             {       
                 int x1=(x>>1);
                 int v1=v>>1;
                  // segmentb1(v1,x1);
                  delay();
                  int x2=x1+1;
                  sum=(sum*10)+x2;
                  //  arr[t]=x2;
                  //  t++;

             }
             else if(v==0x02)
             {       
                 int x1=(x>>1);
                 int v1=v>>1;
                  delay();
                  int x2=x1+4;
                   sum=(sum*10)+x2; 
             }
             else if(v==0x04)
             {       
                 int x1=(x>>1);
                 int v1=v>>1;
                  delay();
                   int x2=x1+7;
                  sum=(sum*10)+x2; 
             }
             else if((v==0x08)&&(x==0x04))
             {  
              if(b3=='+')
              {
                int x3=arr[0]+sum; 
                if(x3>=10)
                {
                  while(x3>0)
                  {
                     int b3=x3%10; 
                    arr1[t1]=b3;
                    t1++;
                      x3=x3/10;
                  }
                  for(int i=t1-1;i>=0;i--)
                  {
                      segmentb1(arr1[i]);
                       delay();
                  }
                  t1=0;
                  
                }
                else
                {
                segmentb1(x3);
                delay();
                }
                t=0;
                sum=0;
              }
                else if(b3=='-')
                {
                  int x3=arr[0]-sum;
                  if(x3>=10)
                 {
                  while(x3>0)
                  {
                     int b3=x3%10;
                     arr1[t1]=b3;
                     t1++;
                      x3=x3/10;
                  }
                  for(int i=t1-1;i>=0;i--)
                  {
                      segmentb1(arr1[i]);
                      delay();
                  }
                  t1=0;
                  // sum=0;
                 }
                   else
                  {
                    segmentb1(x3);
                    delay();
                  }
                  t=0;
                  sum=0;
                }
                else if(b3=='*')
                {  
                  int x3=arr[0]*sum;
                  if(x3>=10)
                {
                  while(x3>0)
                  {
                     int b3=x3%10;
                     arr1[t1]=b3;
                     t1++;
                      x3=x3/10;
                  }
                  for(int i=t1-1;i>=0;i--)
                  {
                      segmentb1(arr1[i]);
                      delay();
                  }
                  t1=0;
                }
                else
                {
                    segmentb1(x3);
                    delay();
                  }
                t=0;
                sum=0;
                }
                else if(b3=='/')
                {  
                  int x3=arr[0]/sum;
                  if(x3>=10)
                {
                  while(x3>0)
                  {
                     int b3=x3%10;
                     arr1[t1]=b3;
                     t1++;
                      x3=x3/10;
                  }
                  for(int i=t1-1;i>=0;i--)
                  {
                      segmentb1(arr1[i]);
                      delay();
                  }
                  t1=0;
                }
                  else
                  {
                    segmentb1(x3);
                    delay();
                  }
                t=0;
                sum=0;
                }
             }
             else 
                {
                  sum=(sum*10)+0;
                  delay();
                }
             portoutc(0x00);
          }
          // segmentb(0);
       }
      }
 }