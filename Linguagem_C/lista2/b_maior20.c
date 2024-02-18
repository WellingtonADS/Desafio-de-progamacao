/*b)	Ler um número e se ele for maior do que 20, 
então imprimir a metade do número senão imprimir a quinta parte do valor*/
#include <stdio.h>
int main()
{
    int nr;
    printf("Insira um numero: ");
    scanf("%d", &nr);

    if (nr > 20)
    {
        printf("O dobro do numero e: %d", nr / 2);
    }
    else
        printf("A quinta parte e: %d", nr / 5);
    
}