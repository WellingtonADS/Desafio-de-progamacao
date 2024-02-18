#include <stdio.h>

#define max 100

int main ()
{

    int n;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    if (n>=max) n = max;

    int i, vet[max];
    for ( i = 0; i < n; i++)
        scanf("%d", &vet[i]);

    int min = vet[0];
    int pos = 0;
       for ( i = 1; i < n; i++)
    {
        if (vet[i]<min) {
            min = vet[i];
            pos = i;
        }
    }
    printf("O Valor minimo = %d esta na posição %d", min, pos );

    

    return 0;
}
