/*g)	Ler dois números inteiros e imprimir a subtração. Antes do resultado,
 deverá aparecer a mensagem: o resultado da subtração é.*/
 #include <stdio.h>
 int main()
 {
    int nr1;
    int nr2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &nr1);
    printf("Insira outo numero inteiro: ");
    scanf("%d", &nr2);

    printf("O resultado da subtracao: %d", nr1 - nr2);
    
 }