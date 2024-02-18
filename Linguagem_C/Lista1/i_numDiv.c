/*i)	Entrar com dois números inteiros e imprimir a seguinte saída:
Dividendo:.........
Divisor: ............
Quociente: .........
Resto:.................
*/
#include <stdio.h>
int main()
{
    int nr1;
    int nr2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &nr1);
    printf("Insira outro numero inteiro: ");
    scanf("%d", &nr2);

    printf("Dividendo: %d\n", nr1);
    printf("Divisor: %d\n", nr2);
    printf("Quociente: %d\n", nr1 / nr2);
    printf("Resto: %d\n", nr1 % nr2);



}