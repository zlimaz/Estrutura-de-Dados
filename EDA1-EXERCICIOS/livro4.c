#include <stdio.h>

int main()
{
    float numeros[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    float *nPtr;
    int i;

//primeira forma de endereçar o ponteiro com o primeiro elemento do array
    nPtr = numeros;  

//segunda forma de endereça o ponteiro para o primeiro elemento do array

    nPtr = &numeros[0];


    for (i = 0; i < 10; i++) {
        printf("Elemento %d: %.1f\n", i, nPtr[4]); // Acesso direto ao array
        
        //(nPtr + i)) isso é um ponteiro offset, na qual calcula os endereços dos outros elementos do array a partir do primeiro numero --> printf("Elemento %d: %.1f\n", i, *(nPtr + i));

        //em vez do ponteir/offset, podemos utilizar o subscrito de ponteiro, no caso seria assim: printf("elemento %d: %1.f\n", i, nPtr[i])

    }

    return 0;
}
