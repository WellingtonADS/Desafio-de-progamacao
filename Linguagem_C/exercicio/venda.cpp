/*b)	Faça um programa em C que calcule e apresente quanto deve ser pago por um produto 
considerando a leitura do preço de etiqueta (PE) 
e o código da condição de pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:
1	À vista em dinheiro ou cheque, com 10% de 
Desconto;
2	À vista com cartão de crédito, com 5% de 
Desconto;
3	Em 2 vezes, preço normal de etiqueta sem 
Juros;
4	Em 3 vezes, preço de etiqueta com 
acréscimo de 10%;
calcule e apresente quanto deve ser pago por um produto
variaveis:
preço de etiqueta == PE
condição de pagamento == CP
Valor do produto == VP
*/

#include <stdio.h>
int main(){

    float pe, cp, vp;
    

    printf("Insira o preco da etiqueta: R$ ");
    scanf("%f", &pe);
    printf("Insira a condicao de pagamento: ");
    scanf("%f", &cp);

    if(cp == 1){
        vp = pe * 0.9;
        printf("valor do produto a vista: R$ %.2f", vp);
    }
    else if(cp == 2){
        vp = pe * 0.95;
        printf("valor do produto a vista no cartão: R$ %.2f", vp);
        }
    else if(cp == 3){
        vp = pe / 2;
        printf("valor do produto 2 pacelas: R$ %.2f", vp);
    }
    else if(cp == 4){
        vp = (pe * 1.1) / 3;
        printf("valor do produto 3 pacelas: R$ %.2f", vp);
    }     

}
