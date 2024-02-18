/*h)	Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo masculino e tiver menor que 35 anos, imprimir nome e a mensagem: ACEITA. 
Caso contrário, imprimir nome e a mensagem: NÃO ACEITA. (Considerar f ou F.) */
#include <stdio.h>
int main ()
{
    char nome[50];
    char sexo;
    int id;

    printf("Insira um nome:");
    scanf("%s", nome);
    
    printf("Insira sexo(m/f):");
    scanf(" %c", &sexo);
    
    printf("Insira Idade:");
    scanf("%d", &id);

    if (sexo == 'm' && id < 35)
    {
        printf("Nome: %s", nome);
    }
    else
        printf("Não aceito");
    
}