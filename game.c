#include <stdio.h>
#include "game.h"

void mostrar_boas_vindas(void)
{
    printf("Projeto final - UFCD 0809\n");
}

void init_board(char board[6][7]) // Iniciar tabuleiro
{
    for (int i = 0; i < 6; i++) // LINHAS
    {
        for (int j = 0; j < 7; j++) // COLUNAS
        {
            board[i][j] = '.'; // posição board[linha][coluna]
        }
    }
}

void print_board(char board[6][7]) // mostrar tabuleiro
{
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < 6)
                printf("|");
        }
        printf("\n");
    }
    for (int j = 0; j < 7; j++)
    {
        printf(" %d ", j);
        if (j < 6)
            printf(" ");
    }
    printf("\n");
}

int get_move(int *col) // ler a jogada
{
    printf("Coluna (0-6): ");
    if (scanf("%d", col) != 1)
    {
        getchar();
        return 0;
    }
    getchar(); // limpar o buffer
    return 1;
}

void show_menu(void) // mostrar opções
{
    printf("=== JOGO QUATRO EM LINHA ===\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Opcao: ");
}

int drop_piece(char board[6][7], int col, char jogador)
{
    for (int i = 5; i >= 0; i--)
    {
        if (board[i][col] == '.')
        {
            board[i][col] = jogador;
            return i;
        }
    }
    return -1;
}
