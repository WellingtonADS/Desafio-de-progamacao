/*h)	Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo masculino e tiver menor que 35 anos,
imprimir nome e a mensagem: ACEITA. Caso contrário, imprimir nome e a mensagem: NÃO ACEITA*/

#include <stdio.h>
int main()
{

    char NOME, SEXO;
    int IDADE;

    printf("Digite seu nome:\n");
    scanf("%s", &NOME);

    printf("Digite Sexo (M/F):\n");
    scanf("%s", &SEXO);

    printf("Digite sua Idade:\n");
    scanf("%d", &IDADE);

    if (SEXO == 'M' && IDADE < 35)
    {
        printf("ACEITA");
    }
    else
    {
        printf("NAO ACEITA");
    }
}
