// Ejercicio 3: Suponiendo que el kilo de azúcar y de café están a 3$ y 0.72$ respectivamente, escribir
// en lenguaje C un programa que:
// 1º) Pida por teclado una cantidad (dato real) en euros.
// 2º) Si la mitad de la cantidad introducida se destina a comprar azúcar, una tercera parte a comprar
// café, y el resto no se gasta. Calcule cuántos kilos de azúcar y café (datos reales) se pueden comprar
// con dicha cantidad de dinero, así como la cantidad (dato real) de dinero sobrante.
// 3º) Muestre por pantalla los resultados (datos reales).

#include <stdio.h>


float
euros=0,dolar=0,azucar=3.0,cafe=0.72;

void main(){
printf("ingrese su cantidad de euros ");
scanf("%g",&euros);
dolar=euros*1.06;
printf("con %g euros se pudo comprar %g kilos de azucar \n",euros,((dolar/2)/azucar),"\n");
printf("se pudo comprar %g kilos en cafe \n",((dolar/2)/3/cafe));
printf("quedo en saldo %g",(dolar/2)-((dolar/2)/3));

}