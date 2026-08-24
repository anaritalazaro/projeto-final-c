# Registo de Sessões

## Sessão 2 - 24/08/2026

**Funcionalidades implementadas hoje:**
- README.md redigido em trabalho autónomo antes da sessão
- Implementada a função drop_piece, que aplica a gravidade: percorre a coluna de baixo para cima, coloca a peça na primeira posição livre e devolve a linha (ou -1 se a coluna estiver cheia)
- Integração do get_move e do drop_piece no ciclo - as peças já caem com gravidade


**Maior dificuldade encontrada e como resolvi:**
- Dificuldade em integrar a função no ciclo do main — a estrutura do do...while: perceber onde termina o ciclo e em aproveitar o valor devolvido pela função em vez de voltar a consultar o tabuleiro. 
- Resolução: Revertido o main.c para a versão da sessão anterior, para partir de uma base limpa; a partir daí, montei o esqueleto do ciclo com os passos comentados por ordem e preenchi um de cada vez.
- Nota: Parte da sessão de hoje teve na 1ª hora um teste e depois tive que rever o que já tinha feito anteriormente antes de começar a programar

**Próximo passo planeado:**
- Alternar entre jogadores, tratar a coluna cheia e as colunas inválidas, e implementar a deteção de vitória.

**Linhas de código escritas hoje (estimativa):**
20

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