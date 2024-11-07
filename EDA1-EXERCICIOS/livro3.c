#include <stdio.h>


//programa que mostra alguns calculos para o usuario

/*int main(){

    int x,y;
    int resultado;
    
   printf("Digite dois numeros separados por espaco:\n");
   scanf("%d %d", &x, &y);

   printf("O resultado da soma e: %d\n", x + y);
   printf("O resultado da multiplicação e: %d\n", x*y);
   printf("menos: %d\n", x-y);
   printf("divisao: %d\n", x/y);
    if(y == 0)
    {
        printf("não é possivel divisão por zero\n");
    };
   printf("o resto e:%d\n", x%y); 
    

   return 0;

}*/

//programa com implementação de if

/*
int main()
{
int x,y;

printf("forneça dois numeros separados por espaço\n");
scanf("%d %d", &x, &y);

if(x > y)
{
    printf("%d é maior\n", x);
} else if ( y > x )
{
    printf("%d é maior\n", y);
} else if ( x == y )
{
    printf("estes numeros sao iguais\n");
}

return 0;

}
*/

//programa para calcular algumas coisas e mostrar qual numero maior e menor dos citados

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite tres numeros separados por espaço: ");
    scanf("%d %d %d", &x, &y, &z);

    // Exibir soma, média e produto diretamente no printf
    printf("A soma é: %d\n", x + y + z);
    printf("A média é: %d\n", (x + y + z) / 3);
    printf("O produto é: %d\n", x * y * z);

    // Verificar o menor número
    if (x < y && x < z) {
        printf("O menor número é: %d\n", x);
    } else if (y < x && y < z) {
        printf("O menor número é: %d\n", y);
    } else {
        printf("O menor número é: %d\n", z);
    }

    if (x > y && x > z) {
        printf("O maior número é: %d\n", x);
    } else if (y > x && y > z) {
        printf("O maior número é: %d\n", y);
    } else {
        printf("O maior número é: %d\n", z);
    }


    return 0;
}
