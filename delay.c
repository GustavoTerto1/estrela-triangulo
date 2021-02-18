/*
 * File:   delay.c
 * Author: 20185147
 *
 * Created on 18 de Fevereiro de 2021, 16:55
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
 void delay( unsigned t )
 {
    while( t )
    {
        --t;
        __delay_ms(1);
    }     
 }
