// Ejercicio 1: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado la nota de tres exámenes (datos reales).
// 2º) Calcule la nota media de los tres exámenes.
// 3º) Muestre por pantalla el resultado (dato real).

#include <stdio.h>
float a=0,b=0,c=0;

void main(){
    printf("ingrese valor de a:");
    scanf("%g",&a);
    printf("ingrese valor de b:");
    scanf("%g",&b);
    printf("ingrese valor de c:");
    scanf("%g",&c);
    printf("la suma es (%g + %g + %g)/3 = %g",a,b,c,(a+b+c)/3);

}
