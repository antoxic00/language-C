/*
aplica��o utilizando vetor. o vetor  ser� declarado com o seu tamanho e poder� ser acessado de dentro do c�digo em qualquer das posi��es.
neste c�digo iremos escrever e ler dados de um vetor */


/* biblioteca de scanf() e printf()*/

#include <stdio.h>

void main(void)
{
    int contagem  = 0;

    /*declara o vetor notas em cinco posi��es*/
    float notas[5];

    /* conta e repete de 0 at� 4 */
    for(contagem = 0; contagem < 5; contagem++)
    {
        printf("\nDigite a nota %d: ", contagem+1);

        /* guarda as notas no vetor*/
        scanf("%f",&notas[contagem]);
    }
    /* Mostrar valores armazenados no vetor */
    printf("\nMostrar valores armazenados: \n");
    for(contagem = 0; contagem < 5; contagem++)
    {
        printf("\nNota armazenada %d: %f \n",contagem+1, notas[contagem]);

    }

}
