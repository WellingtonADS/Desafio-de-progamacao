/*j)	Criar um algoritmo que leia um valor de hora e informe quantos minutos se passaram desde o inicio do dia*/
#include <stdio.h>
int main()
{
    int hr;

    printf("insira hora: ");
    scanf("%d", &hr);

    printf("minutos passados: %d minutos", hr * 60);

}