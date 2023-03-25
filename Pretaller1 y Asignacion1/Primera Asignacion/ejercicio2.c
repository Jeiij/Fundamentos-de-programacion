// Ejercicio 2: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado la arista (dato real) de un cubo.
// 2º) Calcule el volumen del cubo.
// 3º) Muestre por pantalla el resultado (dato real).

#include <stdio.h>

float a=0;
void main(){
printf("ingrese la arista del cubo");
scanf("%g",&a);
printf("El volumen del cubo es %g=%g",a,a*a*a);

}

