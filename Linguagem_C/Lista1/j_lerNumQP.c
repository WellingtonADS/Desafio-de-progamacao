/*h)	Ler um número real e imprimir a quinta parte deste número*/
#include <stdio.h>
int main()
{
    float nr;

    printf("Insira um numero: ");
    scanf("%f", &nr);

    
    printf("A quinta parte do numero e: %.2f", nr / 5);
}