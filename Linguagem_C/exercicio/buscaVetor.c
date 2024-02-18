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

    int x;
    scanf("%d", &x);
    for ( i = 0; i < n; i++)
    {
        if (vet[i]==x) break;
                
    }
    if (i<n)

    {
        printf("O Valor encotrado na posição indicada : %d\n", i);
    }
    else
    printf("O Valor NÃO encotrado" );

    

    return 0;
}
