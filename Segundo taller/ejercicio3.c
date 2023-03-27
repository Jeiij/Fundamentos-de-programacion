// 3) “La empresa ToyLandia C.A. Para este primer semestre del año desea otorgar un
// descuento especial a sus clientes del 50% del monto de la factura mediante un concurso, que
// se basa en las siguientes reglas:
// a) Compras mayores o iguales a 1000$ pero que no excedan de 5000$,
// b) Los Productos en juego solo serán aquellos que tengan la etiqueta color Morado(M) ó
// Amarillo(A),
// c) La cantidad de productos comprados no debe ser menor de 3 articulos.
// d) Si la cédula del cliente termina en un digito par. Se le otorgara un 5% mas del descuento.
// Si termina en un numero impar se le asignara solo un 3%.
// e) Al monto de la factura mas alta se le otorgara una Gif de 300$ sobre su próxima compra.
// Mostrar por pantalla el porcentaje de clientes ganadores del descuento y la cantidad de ganadores de
// la GIF y cuantos obtuvieron el 5% y el 3%
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main(){
    int i,s,n,j,p,cd,compras=0,descuentos_5=0,descuentos_3=0,aux=0,ganadores=0,e;
    
    bool band=true;
    //personas que van a participar
    printf("\ningrese la cantidad de personas que van a participar en el evento :");
    scanf("%d",&p);

    for (i=1;i<=p;i++){
        printf("\n persona %d ingrese la cantidad de productos que va a comprar",i);
        scanf("%d",&j);
        band=true;
        compras=0;
        //por cada persona pedimos cuantos productos compro y se procede a rellenar informacion del producto
        for (s=1;s<=j;s++){
        printf("\ningrese el monto del producto");
        scanf("%d",&n);
        // existen 2 casos, si cumple la primera condicion la persona puede ganar el descuento de 50%
        if (j>=3 && n>=1000 && n<=5000){
            compras+=n;
        }else{//si no cumple lo de arriba, pierde participar en el 50% pero puede obtener la git de 300 si su factura es alta
            compras+=n;
            band=false;
            }
        }

        // definimos la mayor compra para la git de 300$
        if (aux<compras){
            aux=compras;
        }
        // caracteristica del producto, si el participante cumplio con lo antes dicho y selecciona el tipo de etiqueta del producto, puede ganarse el 50%
        printf("\ningrese etiqueta del producto AMARILLO > 1  MORADO > 2");
        scanf("%d", &e);

        if ((e==1 || e==2) && band){
            ganadores++;
        }
        // calculamos el terminal de la cedula si es par o no
        printf("\ningrese su numero de cedula");
        scanf("%d",&cd);

        if ((cd%10)%2==0){
            descuentos_5++;    
        

        }else{
            descuentos_3++; 
            
        }
    
    }
    printf("\ncantidad de personas que cumplieron todas las reglas, ganadores del 50 de descuento : %d de %d participantes",ganadores,p);
    printf("\nEsta factura tiene 300$ en gif en la siguiente compra : %d",aux);
    printf("\nnumero de personas con descuento del 5 : %d",descuentos_5);
    printf("\nnumero de personas con descuento del 3 : %d",descuentos_3);


}




