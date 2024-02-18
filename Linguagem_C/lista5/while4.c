/* Entrar com a idade de várias pessoas e imprimir total de pessoas
com menos de 21 anos total de pessoas com mais de 50 anos e a somatória das idades 
idade
soma - 21
soma +50
soma idade

 */

#include <stdio.h>
int main(){

    int idade;
    int soma20 = 0;
    int soma51 = 0;
    int somaidade = 0;

    printf("Insira uma idade ou digit -1 finalizar: \n");
    scanf("%d",&idade);
    
    while ( idade >= 0)
    {
        somaidade += idade;

        if (idade < 21)
        {
            soma20 += 1;
        }
        if (idade > 50)
        {
            soma51 += 1;
        }
        printf("Insira uma idade ou digit -1 para finalizar: \n");
        scanf("%d",&idade);
        
    }
    printf("Total de pesooas com menos de 21 anos: %d\n", soma20);
    printf("Total de pesooas com mais de 50 anos: %d\n", soma51);
    printf("Total de idades : %d\n", somaidade);
    return 0;
    


}