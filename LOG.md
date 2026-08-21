# Registo de Sessões

## Sessão 1 – 21/08/2026

**Funcionalidades implementadas hoje:**
- Estrutura inicial do projeto, configuração do repositório e ligação ao GitHub;
- Escolha do jogo (4 em linha) e definição das funções necessárias;
- Separação do projeto em main.c, game.c e game.h;
- Implementação do init_board e o print_board, com os números das colunas;
- Reaproveitamento da estrutura do jogo do galo feito no lab anterior.

**Maior dificuldade encontrada e como resolvi:**
- Configuração do Git e ligação ao GitHub,
- Perceber o que pertence ao .h e o que pertence ao .c, 
- A posição do #endif no include guard, o aninhamento dos ciclos no print_board (o bloco dos números tinha de ficar fora do ciclo das linhas), e o <stdio.h> que deixou de chegar por arrasto quando saiu do header.
- Perceber o que do galo era reaproveitável — a estrutura do ciclo e o desenho da matriz sim, a gravidade e a deteção de vitória não, por serem lógica nova.
- Como resolvi:  
   - as mensagens de erro do gcc foram o principal guia — indicaram o `<stdio.h>` em falta no main.c e as variáveis fora de âmbito; 
   - no caso do erro do print_board, foi visível ao executar: os números das colunas não caíram alinhados, o que revelou que o bloco estava dentro do ciclo das linhas em vez de fora.
   - Recursos utilizados: W3Schools, materiais de apoio da UFCD e apoio de IA para revisão de código e esclarecimento de dúvidas.

**Próximo passo planeado:**
- Função que larga a peça na coluna

**Linhas de código escritas hoje (estimativa):**
70