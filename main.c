#include <stdio.h>
#include "game.h"

int main(void)
{
    mostrar_boas_vindas();
    char board[6][7];
    int col;
    int opcao;
    int jogadas = 0; // Contador de jogadas
    char jogador_atual = 'X';

    show_menu();
    scanf("%d", &opcao);
    getchar();

    init_board(board);

    do
    {
        print_board(board);
    } while (jogadas < 42); // máximo jogadas

    return 0;
}
