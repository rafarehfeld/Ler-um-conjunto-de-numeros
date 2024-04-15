#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nLer um conjunto de numeros e informar a media\n");

    int soma = 0;
    int total_numeros = 0;
    int x;
    printf("\nDigite o valor: ");
    scanf("%i",&x);

    while(x != 0)
    {
        soma = soma + x;
        total_numeros++;
        printf("\nValor [0 encerra]: ");
        scanf("%i",&x);
    }
    float media = (float)soma / c;
    printf("\nMedia = %f", media);

    return 0;

}
