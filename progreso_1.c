//El usuario debe ingresar el valor de n. Tenga en cuenta que entre más grande sea n, el resultado debe acercarse a 1.
#include<stdio.h>
#include<math.h>
int main(){
    int numero,i;
    printf("Ingrese un numero que sera tomado como n:");
    scanf("%d",&numero);
    for(i=1;i<numero;i++);
    printf("EL numero es el :%d",numero);
    return 0;
}
