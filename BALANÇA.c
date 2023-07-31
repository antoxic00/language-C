//---------------------------------------------------------------
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Edmar
// Descrição   : simula uma balança com memorização e calcula o IMC para cada peso registrado
// Autor(a)    : Antonio Carlos
// Data atual  : 07/07/2023



#include <stdio.h>

void main (void) {

    float altura1 = 0;
    float altura2 = 0;


    for (int i = 0; i < 2; i++) {
        printf("\nDigite altura da Primeira pessoa: ");
        scanf("%f", &altura1);
        printf("\n");

        printf("\nDigite a altura da Segunda pessoa: ");
        scanf("%f", &altura2);
        printf("\n");


    printf("\nResultado:\n");
    printf("\n");

        if (altura2 < altura1)
            printf("\n A primeira pessoa e mais alta em comparado a Segunda\n");

        else if (altura2 > altura1)
            printf("\n A segunda pessoa e mais alta em comparado a Primeira\n");
        else
            printf("\n Os dois tem a mesma altura\n");
    }

}
