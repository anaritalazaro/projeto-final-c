#ifndef GAME_H
#define GAME_H

void mostrar_boas_vindas(void);

//Protótipos - Declarar
void init_board(char board[6][7]);
void print_board(char board[6][7]);
int get_move(int *col);
void show_menu(void);

#endif //última linha do ficheiro