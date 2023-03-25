// Ejercicio 7: Escribir en lenguaje C un programa que:
// 1º) Pida por teclado un número (dato entero).
// 2º) Muestre por pantalla:
// • "ES PAR", en el caso de que el número sea divisible entre 2.
// • "ES IMPAR", en el caso de que el número no sea divisible entre 2. 


#include <stdio.h>

void main(){
    int n;
    printf("ingrese un numero entero: ");
    scanf("%d", &n);

   if((n%2)==0){
    printf("El numero es par ");
   }else{
    printf("El numero es impar ");
   }
}