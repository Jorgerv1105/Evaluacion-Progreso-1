//El usuario debe ingresar el valor de n. Tenga en cuenta que entre más grande sea n, el resultado debe acercarse a 1.
#include<stdio.h>
#include<math.h>
int main(){
//Igreso de variables que necesitamos para el programa
    int numero,i;
    float sumatoria;
//Interaccion con el usuario
    printf("PROGRAMA PARA CALCULAR LA SUMATORIA ");
    printf("\nIngrese un numero que sera tomado como n:");
    scanf("%d",&numero);
//Uso de for para determinar cuantas veces se debe repetir la sumatoria 
    for(i = 1; i <= numero; i++){
//Calculo de la condicion que se nos plantea en el ejercicio
        sumatoria = (1/(2)^i);
//Despliegue de las sumatorias del ejercicio
        printf("\nTus numeros de la sumatoria son :%f",sumatoria);
    }
        printf("\nGracias por utilizar el programa");
    return 0;
}
