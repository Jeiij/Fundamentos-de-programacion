// Ejercicio 8: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado tres números (datos enteros).
// 2º) Muestre el mayor de los tres números introducidos.

#include <stdio.h>

void main(){
    int j,a=0,g=0,n=0;
    printf("ingrese la cantidad de numeros que desea comparar: ");
    scanf("%d", &j);
    while (n<j){
        printf("ingrese un numero entero: ");
        scanf("%d", &g);
        if (a<g) {
            a=g;
        }
        else {
            if (a==0){
                a=g;
            } 
        } 
        n++;
    }
    printf("El numero entero mayor es : %d",a);
   
}