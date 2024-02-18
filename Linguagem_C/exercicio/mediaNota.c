/*Crie um programa para ler 3 notas e mostrar a média delas.

variavel:

nota1 == n1
nota2 == n2
nota3 == n3
media == md
*/
#include <stdio.h>
int main()
{
    //Decalara variavl
    float n1;
    float n2;
    float n3;
    float md;

    printf("Insira a nota 1: ");
    scanf("%f", &n1);

    printf("Insira a nota 2: ");
    scanf("%f", &n2);

    printf("Insira a nota 3: ");
    scanf("%f", &n3);

    md = (n1 + n2 + n3) / 3;

    printf("Sua media e: %.2f", md);

}