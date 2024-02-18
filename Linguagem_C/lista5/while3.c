/* Entrar com números e imprimir o quadrado de cada número 
 até entrar um número múltiplo de 6 que deverá ter seu quadrado também impresso 

 nr
 quadrado
 finaliza com multiplo de 6

 */
#include <stdio.h>
int main()
{
    int nr;
    int quadrado;
    
    printf("Insira um numero: ");
    scanf("%d", &nr);

    while (nr % 6 !=0)
    {
        quadrado = nr * nr;
        
        printf("O quadrado do numero (%d) e: %d\n", nr, quadrado);

        printf("Insira um numero: ");
        scanf("%d", &nr);

        
    }
    quadrado = nr * nr;
    printf("O quadrado do multiplo de 6 (%d) e: %d", nr, quadrado);
    return 0;
    
}