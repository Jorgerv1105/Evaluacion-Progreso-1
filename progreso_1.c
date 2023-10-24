//El usuario debe ingresar el valor de n. Tenga en cuenta que entre más grande sea n, el resultado debe acercarse a 1.
#include<stdio.h>
#include<math.h>
int main(){
    int numero,i;
    float sumatoria;
    printf("Ingrese un numero que sera tomado como n:");
    scanf("%d",&numero);
    for(i = 1; i <= numero; i++){
        sumatoria = 1/2^i;
        printf("Tus numeros de la sumatoria son :%f",sumatoria);
    }
    return 0;
}
