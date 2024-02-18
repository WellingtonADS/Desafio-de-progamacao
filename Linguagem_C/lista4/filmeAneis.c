/*j)	No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme.
 Cada espectador respondeu a um questionário no qual constava sua idade e a sua opinião em relação ao filme:
 
  excelente – 3; bom – 2; regular – 1. Criar um algoritmo que receba a idade e a opinião de 20 espectadores, calcule e imprima:
•	A média das idades das pessoas que responderam excelente;
•	A quantidade de pessoas que responderam regular;
•	A percentagem de pessoas que responderam bom entre todos os expectadores analisados.

entrada: idade,
opinião:
excelente – 3; bom – 2; regular – 1

Condição: 20 espectadores
calcule:

A média das idades excelente
A quantidade regular;
A percentagem bom entre todos os 20 expectadores

saida:

A média das idades das pessoas que responderam excelente
A quantidade de pessoas que responderam regular;
A percentagem de pessoas que responderam bom entre todos os expectadores analisados

*/

#include <stdio.h>
int main()
{
    int age = 0;
    int op;
    int somaAge = 0;
    int somaEx = 0;
    int somaBo = 0;
    int somaRe = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira a %d idade: ", i);
        scanf("%d", &age);
        printf("Insira a %d opiniao (3 - Exelente, 2 - bom, 1 - Regular): \n", i);
        scanf("%d", &op);

        

        if (op == 3)
        {
            somaAge += age;
            somaEx += 1;
        }
        if (op == 2)
        {
            somaBo += 1;
        }
        if (op == 1)
        {
            somaRe += 1;
        }        

    }
    printf("A media das idades que responderam excelente: %d \n", somaAge / somaEx);
    printf("A percentagem bom entre todos os 20 expectadores: %d %% \n", (somaBo * 100) / 20);
    printf("A quantidade regular: %d \n", somaRe);

    return 0;

    


}