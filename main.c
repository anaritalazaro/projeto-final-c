#include <stdio.h>
#include "game.h"

int main(void)
{
    char board[6][7];
    int col;
    int linha;
    int opcao;
    int jogadas = 0; // Contador de jogadas
    char jogador_atual = 'X';

    mostrar_boas_vindas();

    show_menu();
    scanf("%d", &opcao);
    getchar();

    init_board(board);

    while (jogadas < 42) // máximo jogadas no jogo dos 4 em linha
    {
        //Mostrar o tabuleiro
        print_board(board);
        //Anunciar de quem é o turno (uma linha, com %c)
        printf("\n--- Turno do jogador %c ---\n", jogador_atual);
        // Pedir a coluna com get_move
        get_move(&col);
        // Largar a peça (drop_piece) com essa coluna e o jogador_atual , guardando o retorno em 'linha'
        linha = drop_piece(board, col, jogador_atual);
        // Se devolveu -1, avisar que a coluna está cheia e voltar atrás sem gastar a jogada
                //if (linha == -1)
                //avisar 
                //continue
        //Caso contrário, incrementar jogadas e trocar o jogador

                //jogadas++
                jogadas++;
                //if 
    }
    print_board(board);

    return 0;
}
