#include <stdio.h>
int main()
{
    int nr;
    int soma;

    for(int i = 0; i < 20; i++) {
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &nr);
        soma += nr;

    }
        printf("Soma dos numero: %d", soma);

}