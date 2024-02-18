/*c)	Efetuar a leitura de dois números diferentes e identificar o maior valor*/
#include <stdio.h>
int main()
{
  
    int nr1;
    int nr2;

    printf("Insira um numero nr1: ");
    scanf("%d", &nr1);
    printf("Insira um numero nr2: ");
    scanf("%d", &nr2);

    if (nr1 > nr2 )
    {
    
        printf("Maior numero: %d", nr1);
    }
    else

        printf("Maior numero: %d", nr2);
    



}