/* Executar o número entre 1 a 4 se a pessoa digitar um número diferente mostrar a mensagem entrada inválida
 e solicitar o número novamente se digitar correto mostre o número digitado 
 
 nr

 número diferente mostrar a mensagem entrada inválida

 solicitar o número novamente 
 se digitar correto mostre o número digitado 

 */

#include <stdio.h>
int main()
{
    int nr;

    printf("Insira um numero entre 1 e 4: ");
    scanf("%d", &nr);

    while(nr <1 || nr >4)
    {

        printf("numero inavlido\n");
        printf("Insira um numero entre 1 e 4: ");
        scanf("%d", &nr);
    }
    printf("numero entre 1 e 4 digitado: %d", nr);
    return 0;
}