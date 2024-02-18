/*f)	Ler nome, endereço e telefone e imprimi-los*/
#include <stdio.h>
int main ()
{
    char nome[50];
    char end[50];
    int tel;

    printf("Insira seu nome: ");
    scanf("%s", &nome);
    printf("Insira seu end: ");
    scanf("%s", &end);
    printf("Insira seu telefone: ");
    scanf("%d", &tel);

    printf("Dados informados Nome: %s\n", nome);
    printf("Dados informados End: %s\n", end);
    printf("Dados informados Tel: %d\n", tel);


}
