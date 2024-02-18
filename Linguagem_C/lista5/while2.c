/* Ler vários números e informar quantos números entre 100 e 200 foram digitados 
quando o valor zero for lido o algoritmo deverá cessar sua execução 
nr
cont nr

digite 0 para terminar

 */
#include <stdio.h>
int main ()
{
    int nr;
    int contnr = 0;

    printf("Insira um numero entre 100 e 200 ou digite zero para terminar: ");
    scanf("%d", &nr);

    while (nr != 0)
    {
        if (nr>= 100 && nr <=200)
        {
            contnr += 1;
        }
        
        printf("Insira um numero entre 100 e 200 ou digite zero para terminar: ");
        scanf("%d", &nr);

    }
    printf("total de numeros digitados: %d", contnr);
    return 0;


    
}