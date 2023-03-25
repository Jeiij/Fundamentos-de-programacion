// Ejercicio 4: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado una hora en horas, minutos y segundos (datos enteros).
// 2º) Calcule cuántos segundos han pasado desde las 0:0:0 horas.
// 3º) Muestre por pantalla el resultado (dato entero).



#include <stdio.h>

int main()
{
    int h, m, s;

    printf( "\n   Introduzca horas: " );
    scanf( "%d", &h );
    printf( "\n   Introduzca minutos: " );
    scanf( "%d", &m );
    printf( "\n   Introduzca segundos: " );
    scanf( "%d", &s );
 
    printf( "\n   Desde las 0:0:0 horas han pasado %d segundos.", h * 3600 + m * 60 + s );

}