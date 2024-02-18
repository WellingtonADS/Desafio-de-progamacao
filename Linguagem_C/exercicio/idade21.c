/*Entrar com a idade de várias pessoas e imprimir total de pessoas com menos de 21 anos 
total de pessoas com mais de 50 anos e a somatória das idades */
#include <stdio.h>
int main()
{
    int id;
    int cont20 = 0;
    int cont51 = 0;
    int somaid;

    printf("Insira a idade de uma pessoas ou digite -1 para o resultado: ");
    scanf("%d", &id);

    while (id != -1)
    {
        somaid = id + somaid;

        if (id < 20)
        {
            cont20 = cont20 + 1;
        }
        if (id >50)
        {
            cont51 = cont51 + 1;
        }

        printf("Insira a idade de uma pessoas ou digite -1 para o resultado: ");
        scanf("%d", &id);
        

    }

    printf("Total de pessoas com menos de 21 anos: %d\n", cont20);
    printf("Total de pessoas com mais de 50 anos: %d\n", cont51);
    printf("Soma das idades: %d\n", somaid);
    

}