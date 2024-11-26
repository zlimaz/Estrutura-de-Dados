#include <stdio.h>

int main(){
/*o programa calculará o produto de três numeros inteiros*/
    int x;
    int y;
    int z;
    int resultado;

    printf("digite um numero inteiro\n");
    scanf("%d", &x);

    printf("digite o segundo numero inteiro\n");
    scanf("%d", &y);

    printf("digite o terceiro numero inteiro\n");
    scanf("%d", &z);

    resultado =  x*y*z;

    printf("o resultado e: %d\n", resultado);
    

}