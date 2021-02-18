/*
 * File:   contatores.c
 * Author: 20185147
 *
 * Created on 18 de Fevereiro de 2021, 16:46
 */


#include <xc.h>

 void contatores_init( void )
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;

    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
}
void k1 (int estado)
{
  PORTDbits.RD7 = estado;
}  

void k2 (int estado) 
{
  PORTDbits.RD6 = estado;
}

void k3 (int estado) 
{
  PORTDbits.RD5 = estado;
}


