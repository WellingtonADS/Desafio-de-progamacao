/*Entrar com 10 números positivos e imprimir o dobro de cada número digitado*/
#include <stdio.h>
int main()
{
    int nr;
    
    for(int i = 0; i < 10; i++){

        printf("Insira o %d numero: ", i+1);
        scanf("%d", &nr);

        printf("Dobro do numero: %d\n\n", nr*2);

    }
}