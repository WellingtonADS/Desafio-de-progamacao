#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int nr;

    printf("Digite um numero de 1 a 7 para saber o dia da semana: ");
    scanf("%d", &nr);

    switch (nr)
    {
    case 1:
        printf("Domingo");
        break;
    
    default:
        printf("Numero Invalido");
        break;
    }

}