/*---------------------------------------------------------
 programa usando fun��o para calcular a m�dia de 3 numeros
-----------------------------------------------------------*/
#include <stdio.h>

float media(float a, float b);

void main(main)
{
    float n1 = 0, n2 = 0, resultado = 0;
    printf("\nDigite o valor um 1 e valor 2: ");
    scanf("%f %f", &n1, &n2);

    resultado = media(n1,n2);

    printf("\nO valor da media foi: %f",resultado);

}
float media(float a, float b)
{   /* declara��o de variavel local de media*/
    float z = 0;
    /*calculo da m�dia de 2 n�meros*/
    z = (a + b)/ 2;
    /*retorna o valor da m�dia para a variavel resultado
    que est� dentro */



    return (z);
}
