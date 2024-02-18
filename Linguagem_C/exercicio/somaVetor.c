#include <stdio.h>

#define max 100

int main ()
{

    int vet[max];
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n>=max)
    {
        printf("O Valor de n sera alterado para %d", max);
        n = max;

    }
    int i;
    for ( i = 0; i < n; i++)
    {
        vet[i] = i + 1;

    }

    int soma = 0;
    i = 0;
    while (i<n)
    {
        soma += vet[i];
        i++;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
