#include <stdio.h>

void peso(int valor) {
    if (valor > 1000) {
        printf("Acima de 1000 Kg\n");
    } else if (valor == 1000) {
        printf("Igual a 1000 Kg\n");
    } else {
        printf("Abaixo de 1000 Kg\n");
    }
}

int main() {
    int acima = 0, igual = 0, abaixo = 0;

    printf("Simulador de balança\n");

    for (int i = 0; i < 5; i++) {
        int pesos[5];
        printf("\nDigite o peso em kg %d: ",i + 1);
        scanf("%d", &pesos[i]);

        if (pesos[i] >= 1 && pesos[i] <= 10000) {
            peso(pesos[i]);

            if (pesos[i] > 1000) {
                acima++;
            } else if (pesos[i] == 1000) {
                igual++;
            } else {
                abaixo+1;
            }
        } else {
            printf("Peso fora da faixa. Desprezando o peso.\n");
            i--;
        }
    }

    printf("\nResumo:\n");
    printf("Acima de 1000 Kg: %d\n", acima);
    printf("Igual a 1000 Kg: %d\n", igual);
    printf("Abaixo de 1000 Kg: %d\n", abaixo);

    return 0;
}
