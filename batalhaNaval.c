#include <stdio.h>

#define SIZE 10 // Define o tamanho do tabuleiro como 10x10
#define NAVIO 3  // Define o valor que representa um navio no tabuleiro
#define VAZIO 0  // Define o valor que representa uma posição vazia no tabuleiro

// Uma função para inicializar o tabuleiro com posições vazias
void inicializarTabuleiro(int tabuleiro[SIZE][SIZE]) {
    printf("======================================= \n");
    printf("= 🚢 BATALHA NAVAL V1.0 by g.arezi🚢 = \n");
    printf("======================================= \n");
    printf(" \n");
    // Percorre cada linha do tabuleiro
    for (int i = 0; i < SIZE; i++) {
        // Percorre cada coluna do tabuleiro
        for (int j = 0; j < SIZE; j++) {
            tabuleiro[i][j] = VAZIO; // Define cada posição como vazia
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[SIZE][SIZE]) {
    // Percorre cada linha do tabuleiro
    for (int i = 0; i < SIZE; i++) {
        // Percorre cada coluna do tabuleiro
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe o valor da posição
        }
        printf("\n"); // Nova linha após cada linha do tabuleiro
    }
}

//  posiciona os navios no tabuleiro
void posicionarNavios(int tabuleiro[SIZE][SIZE]) {
    // Posiciona navios na diagonal principal
    tabuleiro[0][0] = NAVIO; // Posição (0,0)
    tabuleiro[1][1] = NAVIO; // Posição (1,1)

    // Posiciona navios na diagonal secundária
    tabuleiro[0][SIZE - 1] = NAVIO; // Posição (0,9)
    tabuleiro[1][SIZE - 2] = NAVIO; // Posição (1,8)

    // Adicionando mais dois navios em posições não diagonais
    tabuleiro[3][4] = NAVIO; // Posição (3,4)
    tabuleiro[5][6] = NAVIO; // Posição (5,6)
}

// Função principal
int main() {
    int tabuleiro[SIZE][SIZE]; // Declaração do tabuleiro como uma matriz 10x10

    inicializarTabuleiro(tabuleiro); // Inicializa o tabuleiro com posições vazias
    posicionarNavios(tabuleiro); // Posiciona os navios no tabuleiro
    exibirTabuleiro(tabuleiro); // Exibe o tabuleiro no console

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
