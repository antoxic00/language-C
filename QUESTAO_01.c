/**/

#include <stdio.h>


void main(void)
{
    float num1 , num2, num3 = 0;

    printf("\nDigite o valor do numero 1: ");
        scanf("%f", &num1);

    printf("\nDigite o valor do numero 2: ");
        scanf("%f", &num2);

    printf("\nDigite o valor do numero 3: ");
        scanf("%f", &num3);


    float media = (num1 + num2 + num3) / 3;

    printf("\nO valor da media dos resultados %f",media);


}
