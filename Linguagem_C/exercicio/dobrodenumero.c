/*Escreva um programa que leia um número inteiro positivo e exiba o dobro do mesmo.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale( LC_ALL, "" );
    int nr;
    int db;

    printf("Insira um numero inteiro: ");
    scanf("%d", &nr);

    db = nr * 2;


    printf("O dobro de %d é %d", nr, db);

}