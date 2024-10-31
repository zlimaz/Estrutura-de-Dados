#include <stdio.h>

int main(){
    int idade;
    float altura;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite sua Altura:");
    scanf("%F", &altura);
    printf("idade: %d, altura: %.f\n", idade, altura);
    return 0;
}