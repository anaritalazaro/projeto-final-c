# Projeto Final - UFCD 0809 
Jogo em C desenvolvido no âmbito da UFCD 0809.

## JOGO 4 EM LINHA
O 4 em linha é um jogo de tabuleiro vertical para dois jogadores.
O objetivo é ser o primeiro a alinhar quatro peças da mesma cor na horizontal, vertical ou diagonal. 
Os jogadores revezam-se a deixar cair uma peça de cada vez numa das colunas, e a peça ocupa sempre o espaço mais baixo disponível.
As peças são apresentadas a cores no terminal: vermelho para o jogador X, amarelo para o O.

## Funcionalidades
- Tabuleiro 6x7 com gravidade nas peças
- Deteção de vitória na horizontal, vertical e nas duas diagonais
- Deteção de empate quando o tabuleiro fica cheio
- Validação de colunas inválidas ou cheias
- Peças a cores no terminal (X vermelho, O amarelo)
- Menu com opção de jogar várias partidas seguidas

## Compilar
```bash
gcc main.c game.c -o jogo
```

## Executar
```bash
./jogo    # Linux/macOS/MSYS2
jogo.exe  # Windows
```

## Estrutura dos ficheiros 
- `main.c` — função principal, menu e ciclo do jogo
- `game.c` — implementação das funções do jogo (tabuleiro, jogadas, verificação de vitória)
- `game.h` — protótipos das funções e definições partilhadas
- `README.md` — descrição do projeto
- `LOG.md` — registo de progresso por sessão

## Autoria
- Formanda: Ana Silva  
- UFCD 0809  
- Formador: Rúben Ferreira  

