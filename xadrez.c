#include <stdio.h>
// Desafio Jogo Xadrez

int main(void) {
   
    // Configuração: quantidade de casas para cada peça
    const int passosTorre  = 5; // Torre: 5 casas para a direita
    const int passosBispo  = 5; // Bispo: 5 casas na diagonal "Cima Direita"
    const int passosRainha = 8; // Rainha: 8 casas para a esquerda
    const int passosVerticaisCavalo = 2; // duas casas para baixo
    const int passosHorizontaisCavalo = 1; // uma casa para a esquerda

     
    printf("Movimento da Torre (%d casas para a direita):\n", passosTorre);
    for (int i = 1; i <= passosTorre; i++) {
        printf("Direita\n");
    }

    // Separador visual
    printf("\n");

   
    printf("Movimento do Bispo (%d casas na diagonal para cima e à direita):\n", passosBispo);
    int contadorBispo = 0;
    while (contadorBispo < passosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Separador visual
    printf("\n");

    printf("Movimento da Rainha (%d casas para a esquerda):\n", passosRainha);
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < passosRainha);

    // Separador visual exigido antes do Cavalo
    printf("\n");

    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    // --- Segmento vertical: duas casas para BAIXO ---
    for (int passoV = 0; passoV < passosVerticaisCavalo; passoV++) {
        int unidade = 0;            // conta a "unidade" de movimento dentro desta casa
        while (unidade < 1) {       // este while representa a execução por casa (aninhamento)
            printf("Baixo\n");
            unidade++;
        }
    }

    // --- Segmento horizontal: uma casa para ESQUERDA ---
    for (int passoH = 0; passoH < passosHorizontaisCavalo; passoH++) {
        int unidade = 0;
        while (unidade < 1) {
            printf("Esquerda\n");
            unidade++;
        }
    }
     // Separador visual para finalizar o codigo
    printf("\n");
    // Fim
    return 0;
}
