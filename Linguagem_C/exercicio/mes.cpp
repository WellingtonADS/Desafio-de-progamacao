/* Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. 
Caso o usuário digite um numero fora desse intervalo,
deverá aparecer uma mensagem informando que não existe mês com este numero*/

#include <stdio.h>
int main (){

    int mes;

    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    if(mes >= 1 && mes <= 12) {

        if ( mes == 1 ){printf("Jan");}
        
        if ( mes == 2 ){printf("fev");}
        
    }
    else{printf("nao existe mes com este numero");}
        

    
    

}
