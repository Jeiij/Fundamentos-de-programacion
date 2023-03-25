// Ejercicio 6: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado una cantidad (dato entero) en dolares.
// 2º) Calcule su equivalente en euros.
// 3º) Muestre por pantalla el resultado (dato real).
// Nota: 1 euro = 1,66386 dolares


#include <stdio.h>



void main(){
    float d;
    printf("ingrese el monto en dolares: ");
    scanf("%f", &d);

    printf("los valor en euros es %f",(d/1.08));
}