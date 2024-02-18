/*Crie um programa que leia um valor de hora e informe quantos minutos se passaram desde o início do dia.

1h tem 60min

Variavel:

hora == hr
resultado == hr * 60
*/
#include <stdio.h>
int main ()
{
    int hr;
    int resultado;
    
    printf("Insira a hora sem minutos: ");
    scanf("%d", &hr);

    resultado = hr * 60;

    printf("Se passaram %d min", resultado);




}