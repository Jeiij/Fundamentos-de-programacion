#include <stdio.h>
#include <stdbool.h>

void main(){
    int i,j,aux,n=0,cont_p=0,cont_i=0,cont_pri=0,cont_z=0;
    bool primo=true;

    printf("ingrese la cantidad de numeros que desea evaluar: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        //pedira por cada iteraccion un numero el cual lo evaluara.
        printf("ingrese un numero entero: ");
        scanf("%d", &j);
        
        //evalua si es par o impar.
        if((j%2)==0){
            cont_p++;
        }else{
            cont_i++;
        }
        //evalua si un numero es primo o no
        int c=2;
        primo=true;
        if(j>=2){
            while(c<=(j-1) && (primo)) {
                if ((j%c)==0){
                    primo=false;

                }
                c++;
            
            }
            if (primo){
                cont_pri++;
            }
        }
        //evalua cuantos 0 se han colacado
        aux=j;
        do
        {
            aux=j%10;
            if (aux==0){
                cont_z++;
            }
            j=j/10;
            



            
        } while (j!=0);
        


    }
    
    printf("\nPares: %d\nImpares: %d\nPrimos: %d\nZeros: %d\n",cont_p,cont_i,cont_pri,cont_z);
   
}



