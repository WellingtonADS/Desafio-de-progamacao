/*Executar o número entre 1 a 4 se a pessoa digitar um número 
diferente mostrar a mensagem entrada inválida e solicitar o número novamente se digitar correto mostre o número digitado

entre com um numero de 1 a 4
numero errado:  entrada inválida
Solicitar o número novamente
se digitar correto mostre o número digitado
 
variavel nr

*/
#include <stdio.h>

int main()
{
    int nr;

    printf("Insira um numero entre 1 e 4: \n");
    scanf("%d", &nr);

    while (nr < 1 || nr > 4)
    {
        printf("Entrada inválida. ");
        printf("Insira um numero entre 1 e 4: ");
        scanf("%d", &nr);
    }

    printf("Numero digitado: %d", nr);

    return 0;
}
