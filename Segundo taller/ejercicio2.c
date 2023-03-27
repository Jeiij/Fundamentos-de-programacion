// 1) Desarrolle un programa en C que permita determinar si dos números ingresados por
// teclado son amigos
// Dos números se consideran amigos si la suma de sus divisores es igual al otro número, por
// ejemplo.
// Los números 220 y 284
// 220: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 10 = 284
// 284: 1, 2, 4, 71, 142 = 220
#include <stdio.h>

void main(){
    int i,n,j,s,acu=0,acuu=0;
    printf("\ningrese el primer numero: ");
    scanf("%d",&n);

    printf("\ningrese el segundo numero: ");
    scanf("%d",&j);

    for(i=1;i<=n;i++){
        if((n%i)==0 && i!=n){
            
            acu=acu+i;
        }
            
            
    }
    for(s=1;s<=j;s++){
        if((j%s)==0 && s!=j){
            
            acuu=acuu+s;
        }           
    } 
    
    if(acu==j && acuu==n){
        printf("Son amigos");
    }else{
        printf("No son amigos");
    }
    }  
        


    

