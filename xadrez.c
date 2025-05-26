#include <stdio.h>

// Definição de constantes para os movimentos
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {

    // Movimentação do BISPO

    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");

    // O bispo se move na diagonal superior direita, 
    // combinei o "Cima" e "Direita" para poder mover.
    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("-----------------------------\n");

    // Movimentação da TORRE

    printf("Movimentação da Torre (5 casas para Direita):\n");

    int contador_torre = 1;
    while (contador_torre <= MOVIMENTO_TORRE) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("-----------------------------\n");

    // Movimentação da RAINHA

    printf("Movimentação da Rainha (8 casas para Esquerda):\n");

    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= MOVIMENTO_RAINHA);
    printf("-----------------------------\n");

    return 0;
}
