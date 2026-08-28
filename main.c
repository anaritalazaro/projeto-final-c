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

    char vencedor='.';


    mostrar_boas_vindas();

    do
    {
        show_menu();
        scanf("%d", &opcao);
        getchar();

        if (opcao == 2)
        {
            break;
        }

        //reiniciar tabuleiro
        init_board(board);

        jogadas = 0;
        jogador_atual = 'X';
        vencedor = '.';

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
                //Ajuda Formador Rúben
                if (linha == -1) 
                {
                    printf("\nJogada inválida! Coluna cheia ou inexistente. Tenta outra vez.\n");
                    continue; // Volta ao início do while sem gastar jogada nem trocar de jogador
                }
                 // Se a jogada for válida:
                jogadas++;

                vencedor = verificar_vitoria(board);

                if (vencedor != '.')
                {
                
                printf("\n*** O jogador %c ganhou! ***\n", vencedor);
                break;
                }

                // Trocar o jogador para o turno seguinte
                if (jogador_atual == 'X') 
                {
                    jogador_atual = 'O';
                } else 
                {
                    jogador_atual = 'X';
                }
        }
        print_board(board);


        if (vencedor == '.')
        {
            printf("\nEmpate! O tabuleiro esta cheio.\n");
        }
    }
    while(1);

    return 0;
}
