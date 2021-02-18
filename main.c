/*
 * File:   main.c
 * Author: 20185147
 * 
 * Created on 18 de Fevereiro de 2021, 15:09
 */


#include <xc.h>
#include "config.h"

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
void botao_init (void)
{
   TRISDbits.TRISD0 = 1;
   TRISDbits.TRISD1 = 1;
}


void delay( int t )
{ 
    while( t )
    {
        --t;
        __delay_ms(1);
    }     
}        
int s1 (void)
{
    return (PORTDbits.RD1);
}

int s0 (void)
{
    return (PORTDbits.RD0);
}

int lerk1 (void)
{
    return (PORTDbits.RD7);
}

void main(void)
{
    contatores_init();
    botao_init();

    while ( 1 )
    {
        if ( s1() == 1 && lerk1() == 0 )
        {
            k1( 1 );
            k2( 1 );
            delay(1000);
            k2( 0 );
            k3( 1 );
        }
        if (s0() == 1 )
        { 
            k1 ( 0 );
            k2 ( 0 );    
            k3 ( 0 );   
        }
    }
}


