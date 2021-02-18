#include "botoes.h"
#include <xc.h>
#include "config.h"
#define S1   PORTDbits.RD1
#define S0   PORTDbits.RD0


void botao_init (void)
{
   TRISDbits.TRISD0 = 1;
   TRISDbits.TRISD1 = 1; 
}
   int s1 (void)
  {
    return (S1);
  }

int s0 (void)
{
   return (S0);
}

