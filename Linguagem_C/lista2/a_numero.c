/*a)	Entrar com um número e imprimir uma das mensagens: é múltiplo de 5 ou não é múltiplo de 5*/
#include <stdio.h>
int main ()
{
    int nr;
    
    printf("Insira um numero:\n");
    scanf("%d", &nr);

    
    if ( nr % 5 == 0)
    {
        printf("O numero e divisivel de 5");
    }
    else
    {
        printf("O numero nao e divisivel de 5");

    }

    

    

}