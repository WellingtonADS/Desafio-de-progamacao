/*k)	Efetuar o calculo do valor de uma prestação em atraso, utilizando a formula: prestacao = valor + (valor * (taxa/100) * tempo);*/
#include <stdio.h>
int main()
{
    float vl;
    int tmpa;
    float tx;
    

    printf("Insira o valor da prestacao: \n");
    scanf("%f", &vl);
    printf("Insira o tempo de atrso: \n");
    scanf("%d", &tmpa);
    printf("Insira a taxa: \n");
    scanf("%f", &tx);

    printf("O valor da parcela em atraso: %f\n", vl + (vl * (tx / 100) * tmpa));

}