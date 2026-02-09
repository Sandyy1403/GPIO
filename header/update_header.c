#include "library.h"
void port_set(char i,char x)
{
      if(i=='a'||i=='A')
      {
         ddrA=x;
      }
      else if(i=='b'||i=='B')
      {
         ddrB=x;
      }
      else if(i=='c'||i=='C')
      {
         ddrC=x;
      }
      else if(i=='d'||i=='D')
      {
         ddrD=x;
      }
      else if(i=='e'||i=='E')
      {
         ddrE=x;
      }
      else if(i=='f'||i=='F')
      {
         ddrF=x;
      }
      else if(i=='g'||i=='G')
      {
         ddrG=x;
      }
      else if(i=='h'||i=='H')
      {
         ddrH=x;
      }
      else if(i=='J'||i=='j')
      {
         ddrJ=x;
      }
      else if(i=='k'||i=='K')
      {
         ddrK=x;
      }
      else if(i=='l'||i=='L')
      {
         ddrL=x;
      }
}
void port_write(char i,char x)
{
      if(i=='a'||i=='A')
      {
         portA_out=x;
      }
      else if(i=='b'||i=='B')
      {
         portB_out=x;
      }
       else if(i=='c'||i=='C')
      {
         portC_out=x;
      }
      else if(i=='d'||i=='D')
      {
         portD_out=x;
      }
      else if(i=='e'||i=='E')
      {
          portE_out=x;
      }
      else if(i=='f'||i=='F')
      {
         portF_out=x;
      }
      else if(i=='g'||i=='G')
      {
          portG_out=x;
      }
      else if(i=='h'||i=='H')
      {
          portH_out=x;
      }
      else if(i=='J'||i=='j')
      {
         portJ_out=x;
      }
      else if(i=='k'||i=='K')
      {
         portK_out=x;
      }
      else if(i=='l'||i=='L')
      {
         portL_out=x;
      }
}
int port_read(char i)
{
      if(i=='a'||i=='A')
      {
        return portA_INPUT;
      }
      else if(i=='b'||i=='B')
      {
         return portB_INPUT;
      }
       else if(i=='c'||i=='C')
      {
         return portC_INPUT;
      }
      else if(i=='d'||i=='D')
      {
         return portD_INPUT;
      }
      else if(i=='e'||i=='E')
      {
          return portE_INPUT;
      }
      else if(i=='f'||i=='F')
      {
         return portF_INPUT;
      }
      else if(i=='g'||i=='G')
      {
          return portG_INPUT;
      }
      else if(i=='h'||i=='H')
      {
          return portH_INPUT;
      }
      else if(i=='J'||i=='j')
      {
         return portJ_INPUT;
      }
      else if(i=='k'||i=='K')
      {
         return portK_INPUT;
      }
      else if(i=='l'||i=='L')
      {
         return portL_INPUT;
      }
}
void segment(char i,char x)
{   
    
    if(i=='k'||i=='K')
    {   
      portK_out= segment_select(x);
    }
    else if(i=='f'||i=='F')
    {  
       portF_out= segment_select(x);
    }
     else if(i=='b'||i=='B')
    {  
       portB_out= segment_select(x);
    }
    else if(i=='a'||i=='A')
    {  
       portA_out= segment_select(x);
    }
    else if(i=='c'||i=='C')
    {  
       portC_out= segment_select(x);
    }
    else if(i=='l'||i=='L')
    {  
      portL_out= segment_select(x);
    }
}
//Pin configure
void pin_config(char io,int pin,char hl)
{
  if((io == 'a') || (io =='A'))
  { if(hl == 1){ddrA |= 1<<pin;}
    else{ddrA &= (~(1<<pin));}
  }
  else if((io == 'b') || (io == 'B'))
  { if(hl == 1){ddrB |= 1<<pin;}
    else{ddrB &= (~(1<<pin));}
  }
  else if((io == 'c') || (io == 'C'))
  { if(hl == 1){ddrC |= 1<<pin;}
    else{ddrC &= (~(1<<pin));}
  }
  else if((io == 'd') || (io == 'D'))
  { if(hl == 1){ddrD |= 1<<pin;}
    else{ddrD &= (~(1<<pin));}
  }
  else if((io == 'e') || (io == 'E'))
  { if(hl == 1){ddrE |= 1<<pin;}
    else{ddrE &= (~(1<<pin));}
  }
  else if((io == 'f') || (io == 'F'))
  { if(hl == 1){ddrF |= 1<<pin;}
    else{ddrF &= (~(1<<pin));}
  }
  else if((io == 'g') || (io == 'G'))
  { if(hl == 1){ddrG |= 1<<pin;}
    else{ddrG &= (~(1<<pin));}
  }
  else if((io == 'h') || (io == 'H'))
  { if(hl == 1){ddrL |= 1<<pin;}
    else{ddrL &= (~(1<<pin));}
  }
  else if((io == 'j') || (io == 'J'))
  { if(hl == 1){ddrH |= 1<<pin;}
    else{ddrH &= (~(1<<pin));}
  }
  else if((io == 'k') || (io == 'K'))
  { if(hl == 1){ddrK |= 1<<pin;}
    else{ddrK &= (~(1<<pin));}
  }
  else if((io == 'l') || (io == 'L'))
  { if(hl == 1){ddrL |= 1<<pin;}
    else{ddrL &= (~(1<<pin));}
  }
}
//Pin Write
void pin_write(char io,int pin,char hl)
{
  if((io == 'a') || (io =='A'))
  { if(hl == 1){portA_out |= 1<<pin;}
    else{portA_out &= (~(1<<pin));}
  }
  else if((io == 'b') || (io == 'B'))
  { if(hl == 1){portB_out |= 1<<pin;}
    else{portB_out &= (~(1<<pin));} 
  }
  else if((io == 'c') || (io == 'C'))
  { if(hl == 1){portC_out |= 1<<pin;}
    else{portC_out &= (~(1<<pin));}
  }
  else if((io == 'd') || (io == 'D'))
  { if(hl == 1){portD_out |= 1<<pin;}
    else{portD_out &= (~(1<<pin));}
  }
  else if((io == 'e') || (io == 'E'))
  { if(hl == 1){portE_out |= 1<<pin;}
    else{portE_out &= (~(1<<pin));}
  }
  else if((io == 'f') || (io == 'F'))
  { if(hl == 1){portF_out |= 1<<pin;}
    else{portF_out &= (~(1<<pin));}
  }
  else if((io == 'g') || (io == 'G'))
  { if(hl == 1){portG_out |= 1<<pin;}
    else{portG_out &= (~(1<<pin));}
  }
  else if((io == 'h') || (io == 'H'))
  { if(hl == 1){portH_out |= 1<<pin;}
    else{portH_out &= (~(1<<pin));}
  }
  else if((io == 'j') || (io == 'J'))
  { if(hl == 1){portJ_out |= 1<<pin;}
    else{portJ_out &= (~(1<<pin));}
  }
  else if((io == 'k') || (io == 'K'))
  { if(hl == 1){portK_out |= 1<<pin;}
    else{portK_out &= (~(1<<pin));}
  }
  else if((io == 'l') || (io == 'L'))
  { if(hl == 1){portL_out |= 1<<pin;}
    else{portL_out &= (~(1<<pin));}
  }
}
//Pin read
int pin_read(char io,int pin)
{
  int f;
  if((io == 'a') || (io =='A'))
  { int b = ((portA_INPUT) & (1<<pin));
    return b;
  }
  else if((io == 'b') || (io == 'B'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'c') || (io == 'C'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'd') || (io == 'D'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'e') || (io == 'E'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'f') || (io == 'F'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'g') || (io == 'G'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'h') || (io == 'H'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'j') || (io == 'J'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
  else if((io == 'k') || (io == 'K'))
  { int b = ((portK_INPUT) & (1<<pin));
    return b;
  }
  else if((io == 'l') || (io == 'L'))
  { int b = portA_INPUT & (1<<pin);
    return b;
  }
}
void segment_2D_B(int x,int x1)
{
   portB_out=segment_2D_set(x,x1);
}

void segment_2D_A(int x,int x1)
{
    portA_out=segment_2D_set(x,x1);
}
void segment_2D_C(int x,int x1)
{
  portC_out=segment_2D_set(x,x1);
}
void segment_2D_L(int x,int x1)
{
    portL_out=segment_2D_set(x,x1);
}
void segment_2D_F(int x,int x1)
{
   portF_out=segment_2D_set(x,x1);
}