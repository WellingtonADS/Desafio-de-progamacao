/*Escreva um programa em C que receba um valor inteiro e diga se ele é múltiplo de 5.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    int n1;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);

    if (n1 % 5 == 0)
    {
        /* code */
        printf(" Numero Multiplo de 5");
    }
    else{
        printf("Não Numero Multiplo de 5");

    }
    
}