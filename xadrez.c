#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int TABULEIRO = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimentação do Bispo:\n");
    int linha = 4, coluna = 4; //Posição inicial
    for (int i = 1; i < TABULEIRO; i++){
        printf("Diagonal: (%d, %d), (%d, %d), (%d, %d), (%d, %d)\n",
              linha + i, coluna + i, linha - i, coluna - i,
              linha + i, coluna - i, linha - i, coluna + i);
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n Movimentação da Torre:\n");
    for (int i = 1; i <= TABULEIRO; i++){
        printf("Linha: (%d, %d)\n", linha, i); //Horizontal
        printf("Coluna: (%d, %d)\n", i, coluna); //Vertical
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n Movimentação da Rainha: \n");
    for (int i = 1; i < TABULEIRO; i++){
        printf("Diagonal: (%d, %d), (%d, %d), (%d, %d), (%d, %d)\n",
              linha + i, coluna + i, linha - i, coluna - i,
              linha + i, coluna - i, linha - i, coluna + i);
    } 
    for (int i = 1; i <= TABULEIRO; i++){
        printf("Linha: (%d, %d)\n", linha, i); 
        printf("Coluna: (%d, %d)\n", i, coluna);
    }   

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimenttação do Cavalo:\n");
    int movimentos[8][2] = {
        {1, 2}, {2, 1}, {2, -1},
        {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2},
    };
    for (int i = 0; i < 8; i++) {
        int novaLinha = linha + movimentos[i][0];
        int novaColuna = coluna + movimentos[i][1];
        if (novaLinha >= 1 && novaLinha <= TABULEIRO && novaColuna >= 1 && novaColuna <= TABULEIRO) {
            printf("Movimento para: (%d, %d)\n", novaLinha, novaColuna);
        }
        
    }
    


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
