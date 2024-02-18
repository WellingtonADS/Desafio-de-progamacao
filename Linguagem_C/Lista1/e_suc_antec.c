/*e)	Ler um número inteiro e imprimir seu sucessor e seu antecessor.*/
#include <stdio.h>
int main ()
{
    int nr;
    printf("Insira um numero: ");
    scanf("%d", &nr);

    printf("Antecessor: %d\n", nr - 1);
    printf("Sucessor: %d\n", nr + 1);

}