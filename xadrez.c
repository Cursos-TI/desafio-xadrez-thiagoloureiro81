#include <stdio.h>
// Desafio Novato
int main(void) {
    // 1) Configuração: quantidade de casas para cada peça (valores definidos no código)
    const int passosTorre  = 5; // Torre: 5 casas para a direita
    const int passosBispo  = 5; // Bispo: 5 casas na diagonal para cima e à direita
    const int passosRainha = 8; // Rainha: 8 casas para a esquerda

    // A torre se move em linha reta: aqui simulamos 5 passos para a direita.
    // A cada casa, imprimimos a direção "Direita".
    printf("Movimento da Torre (%d casas para a direita):\n", passosTorre);
    for (int i = 1; i <= passosTorre; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar as saídas
    printf("\n");

    // O bispo se move na diagonal: aqui simulamos 5 passos na diagonal "Cima Direita".
    printf("Movimento do Bispo (%d casas na diagonal para cima e à direita):\n", passosBispo);
    int contadorBispo = 0;
    while (contadorBispo < passosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Linha em branco para separar as saídas
    printf("\n");

    // A rainha pode se mover em todas as direções: aqui simulamos 8 passos para a esquerda.
    printf("Movimento da Rainha (%d casas para a esquerda):\n", passosRainha);
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < passosRainha);

    // 5) Fim do programa
    return 0;
}
