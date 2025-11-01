#include <stdio.h>

int main() {
  
    
    int casasTorre = 5;

    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do BISPO ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    /
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da RAINHA ===\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}