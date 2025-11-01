#include <stdio.h>

int main() {
    // ==============================
    // TORRE - usa estrutura FOR
    // Move-se em linha reta (horizontal ou vertical)
    // Aqui ela anda 5 casas para a direita
    // ==============================
    int casasTorre = 5;

    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ==============================
    // BISPO - usa estrutura WHILE
    // Move-se em diagonal
    // Aqui ele anda 5 casas na diagonal "Cima e Direita"
    // ==============================
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do BISPO ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // ==============================
    // RAINHA - usa estrutura DO-WHILE
    // Move-se em todas as direções
    // Aqui ela anda 8 casas para a esquerda
    // ==============================
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da RAINHA ===\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}