// 2) Desarrollar un programa en C que permita dado n numeros ingresados por teclado realizar
// las siguientes validaciones:
// a) Si el numero ingresado por teclado tiene mas de 3 dígitos mostrar por pantalla la cifra invertida:
// Ejm: 345 → 543
// b) Mostrar por pantalla la cantidad de veces que el usuario ingreso el nro 3 y el nro 5

#include <stdio.h>


void main(){
    int i,n,j,cinco=0,tres=0;
    printf("\ningrese cuantos numeros quisiera evaluar\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("\ningrese un numero: ");
        scanf("%d",&j);

        int aux=0;
        do{
            
            aux=(j%10)+(aux*10);
            
            if ((j%10)==5 || (j%10)==-5){
            
            cinco++;
            }
            if((j%10)==3 || (j%10)==-3){
            tres++;
            }
            j=(j/10);

        }while (j!=0);
        if (aux>99 || aux<-100){
        printf("su numero invertido es : %d\n",aux);
        }
    }
    printf("\n numero de cincos encontrados: %d \n numeros de tres encontrados: %d",cinco,tres);
}