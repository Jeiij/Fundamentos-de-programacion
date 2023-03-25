#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
//me calcula la edad
int edades(int aa,int mm,int dd, int da, int ma, int aaa){
        int edad=0;

        edad = aaa-aa;
        if(mm > ma){
            edad--;
        }else if(mm == ma){
            }if(dd > da){
               edad--;
            }
        return edad;
}

void main(){
    int i,n,j,
        dd,mm,aa,
        da,ma,aaa,
        cd,cont_m=0,cont_f=0,
        mayores=0,menores=0,
        des_quince=0,des_treinta=0;
    bool band;    
    
    //pediremos la fecha actual
    band=true;
    do
            {
            printf("\n Ingrese la fecha de actual:");
            printf("\n Dia:\t");
            scanf("%d",&da);
            fflush(stdin);
            printf("\n Mes:\t");
            scanf("%d",&ma);
            fflush(stdin);
            printf("\n Año:\t");
            scanf("%d",&aaa);
            fflush(stdin);
            if(aaa>1900&&ma>=1&&ma<=12&&da>=1&&da<=31){
                band=false;
                if((ma==4||ma==6||ma==9||ma==11)&&da>30){
                    band=true;
                }else if(ma==2&&da>29){
                    band=true;
                }
               
            
            }else{
                band=true;
            }
            }
       

        while(band);

    
    //pediremos el numero de citas disponibles para cada clientes
    
    printf("\ningrese la cantidad de citas que se va a registrar el dia de hoy: ");

    scanf("%d", &n);
    
    for (i=1;i<=n;i++){
       
        // menu de validacion para tipo de sexo
        do
        {
        printf("\nIndique su sexo: \n Masculino--> 1 // feminino--> 2\t");
        scanf("%d", &j);
        fflush (stdin);
        
        } while ((j!=1) && (j!=2));
        // contadores para el sexo seleccionado
        if (j==1){
            cont_m++;
        }else{
            cont_f++;
        }
        //menu de validacion fecha de nacimiento
        band=true;
        do
            {
            printf("\n Ingrese la fecha de nacimiento:");
            printf("\n Dia:\t");
            scanf("%d",&dd);
            fflush(stdin);
            printf("\n Mes:\t");
            scanf("%d",&mm);
            fflush(stdin);
            printf("\n Año:\t");
            scanf("%d",&aa);
            fflush(stdin);
            if(aa>1900&&mm>=1&&mm<=12&&dd>=1&&dd<=31){
                band=false;
                if((mm==4||mm==6||mm==9||mm==11)&&dd>30){
                    band=true;
                }else if(mm==2&&dd>29){
                    band=true;
                }
               
            
            }else{
                band=true;
            }
            }

        while(band);
        //pediremos la cedula
        band=true;
        
        do
        {
            printf("\ningrese su numero de cedula:\t");
            scanf("%d", &cd);
            if(cd>=1000000&&cd<=50000000)
            {
                band=false;
            }else{
                band=true;
            }
            
        } while (band);

        //verificar descuentos,con edades y el dato de las cedula

        if ((edades(aa,mm,dd,da,ma,aaa)>17)){
            mayores++;
            //verificar si tiene descuento o no
            if ((edades(aa,mm,dd,da,ma,aaa)>60) && (j==1)){
                printf("\n---------Felicidades tienes un descuento del 30-Porciento!!!!!--------");
                des_treinta++;
            }
            
        }else{
            menores++;
        }

        if((((cd%10)%2)==0) && (j==2)){
            printf("\n----Felicidades tienes un descuento del 15-Porciento!!!!!-------");
            des_quince++;   
        }
        
        

    
   }
    printf("\n------------------Estadisticas!!!!!------------------------ ");
    printf(" \n Mujeres: %d\n Hombres: %d\n Personas Mayores: %d\n Personas Menores: %d\n",cont_f,cont_m,mayores,menores);
    printf("\n Personas 15@ de descuento: %d\n Personas30  de descuento: %d\n",des_quince,des_treinta);

}  
