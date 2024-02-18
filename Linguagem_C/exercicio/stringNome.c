#include<stdio.h>
int main()
{
    char nome[30];
    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);  /*para ler a string*/
    printf("----- Nome Digitado: ");
    puts(nome);    /*mostra a string*/ 
    return 0;
}