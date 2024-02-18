/*i)	Entrar com dois números inteiros e imprimir a seguinte saída:
Dividendo:.........
Divisor: ............
Quociente: .........
Resto:.................*/
#include <stdio.h>
int main ()
{
    int DD = 10;
    int DV = 2;
    int resultq = DD / DV;
    int resultr = DD % DV;
    printf("O Quociente da divisao e %d e o resto e %d", resultq, resultr);

}