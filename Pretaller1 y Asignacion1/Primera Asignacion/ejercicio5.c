// Ejercicio 5: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado dos números (datos enteros) y sean almacenados en dos variables, llamadas v1
// y v2.
// 2º) Intercambie los valores de las variables.
// 3º) Muestre por pantalla los valores contendidos en las variables

#include <stdio.h>



void main(){
    int v1,v2;
    printf("ingrese primera variable v1: ");
    scanf("%d", &v1);

    printf("ingrese primera variable v2: ");
    scanf("%d", &v2);

    v1=v1+v2;
    v2=v1-v2;
    v1=v1-v2;

    printf("los valor de v1 ahora es %d y el valor de v2 es %d",v1,v2);


}