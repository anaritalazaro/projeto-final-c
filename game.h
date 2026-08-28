#ifndef GAME_H
#define GAME_H

void mostrar_boas_vindas(void);

//Protótipos - Declarar
void init_board(char board[6][7]);
void print_board(char board[6][7]);
int get_move(int *col);
void show_menu(void);

int drop_piece(char board[6][7], int col, char jogador);

int verificar_vitoria(char board[6][7]);


#endif //última linha do ficheiro