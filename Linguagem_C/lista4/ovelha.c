/*i)	Entrar com o peso e a identificação de 5 ovelhas.
Ao final especifique a ovelha mais pesada e o seu número de identificação e a mais leve e o número de identificação.   */
#include <stdio.h>
int main()
{
    int id;
    float kg;
    int idp;
    float kgp = 0;
    int idl;
    float kgl = -1;

    for (int i = 1; i <= 5; i++)
    {
        printf("Insira id ovelha %d: ", i);
        scanf("%d", &id);
        printf("Insira kg ovelha %d: ", i);
        scanf("%f", &kg);

        if (kg > kgp)
        {
            kgp = kg;
            idp = id;
        }
        if (kg < kgl || kgl == -1)
        {
            kgl = kg;
            idl = id;
        }
        

    }
    printf("A ovelha mais pesada:\n");
    printf("Id ovelha mais pesada: %d\n", idp);
    printf("Kg ovelha mais pesada: %.2f\n", kgp);

    printf("A ovelha mais leve:\n");
    printf("Id ovelha mais leve: %d\n", idl);
    printf("Kg ovelha mais leve: %.2f\n", kgl);

    return 0;




}
