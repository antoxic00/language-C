/*---------------------------------------------------------
 programa usando função para calcular a média de 3 numeros
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
{   /* declaração de variavel local de media*/
    float z = 0;
    /*calculo da média de 2 números*/
    z = (a + b)/ 2;
    /*retorna o valor da média para a variavel resultado
    que está dentro */



    return (z);
}
