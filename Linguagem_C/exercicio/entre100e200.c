/*Ler vários números e informar quantos números entre 100 e 200 foram digitados
quando o valor zero for lido o algoritmo deverá cessar sua execução

variavel cont
variavel nr
*/
/*Ler vários números e informar quantos números entre 100 e 200 foram digitados
quando o valor zero for lido o algoritmo deverá cessar sua execução

variavel cont
variavel nr
*/
#include <stdio.h>

int main(){

    int cont = 0;
    int nr;

    printf("Digite um numero entre 100 e 200:\n");
    scanf("%d", &nr);

    while (nr != 0)
    {
        if (nr >= 100 && nr <= 200)
        {
            cont = cont + 1;
        }
        else
        {
            printf("Digite um numero entre 100 e 200:\n ");
        }
        
        scanf("%d", &nr);
    }

    printf("Quantidade de numeros entre 100 e 200: %d\n", cont);
    printf("Programa encerrado.\n");

    return 0;
}
