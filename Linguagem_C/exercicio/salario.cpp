/*Para vários tributos, a base de cálculo é o salário mínimo. 
Fazer um programa que leia o valor do salário mínimo e o valor do salário de uma pessoa. 
Calcular e imprimir quantos salários mínimos ela ganha.
sm == salario minimo;
smp == salario minimo pessoal;
*/
#include <stdio.h>
int main () {
// inserir variaveis
    float sm;
    float smp;
    int resultado;

    printf("Dgigte salario minimo: ");
    scanf("%f", &sm);

    printf("Digite salario pessoal: ");
    scanf("%f", &smp);

    resultado = smp / sm;

    printf("Voce rebece %d salarios minimos", resultado);

}