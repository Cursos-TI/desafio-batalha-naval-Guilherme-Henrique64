#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
#define Linha_Habilidade 7
#define Coluna_Habilidade 7

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0};
    int tabuleiro_habilidade_CONE[Linha_Habilidade][Coluna_Habilidade] = {0};
    int tabuleiro_habilidade_CRUZ[Linha_Habilidade][Coluna_Habilidade] = {0};
    int tabuleiro_habilidade_OCTAEDRO[Linha_Habilidade][Coluna_Habilidade] = {0};
    int navio = 3;

    // Diagonal primária
    for (int i = 0; i < 3; i++){
        tabuleiro[i][i] = navio;
    }

    // Diagonal secundária
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][COLUNAS - 1 - i] = navio;
    }

    // Horizontal
    for (int i = 5; i < 8; i++){
        tabuleiro[0][i] = navio;
    }

    // Vertical
    for (int i = 3; i < 6; i++){
        tabuleiro[i][9] = navio;
    }

    // Tabuleiro Original
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf("%i ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    
    // Incrementando o Cone
    for (int i = 1; i < 6; i++){
        tabuleiro_habilidade_CONE[2][i] = 1;
        for (int j = 2; j < 5; j++){
            tabuleiro_habilidade_CONE[1][j] = 1;
            tabuleiro_habilidade_CONE[0][3] = 1;
        }
    }
    // Tabuleiro de Habilidade Cone
    printf("    Cone: \n");
    for (int i = 0; i < Linha_Habilidade; i++){
        for (int j = 0; j < Coluna_Habilidade; j++){
            printf("%i ", tabuleiro_habilidade_CONE[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    
    
    // Incrementando a Cruz
    for (int i = 1; i < 6; i++){
        tabuleiro_habilidade_CRUZ[i][3] = 1;
        for (int j = 1; j < 6; j++){
            tabuleiro_habilidade_CRUZ[3][j] = 1;
        }
    }
    // Tabuleiro de Habilidade Cruz
    printf("    Cruz: \n");
    for (int i = 0; i < Linha_Habilidade; i++){
        for (int j = 0; j < Coluna_Habilidade; j++){
            printf("%i ", tabuleiro_habilidade_CRUZ[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");



    // Incrementando a Octaedro 
    tabuleiro_habilidade_OCTAEDRO[2][3] = 1;
    tabuleiro_habilidade_OCTAEDRO[4][3] = 1;
    for (int i = 2; i < 5; i++){
        tabuleiro_habilidade_OCTAEDRO[3][i] = 1;   
        }

    // Tabuleiro de Habilidade Octaedro
    printf("  Octaedro: \n");
    for (int i = 0; i < Linha_Habilidade; i++){
        for (int j = 0; j < Coluna_Habilidade; j++){
            printf("%i ", tabuleiro_habilidade_OCTAEDRO[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    return 0;
}

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0