🛳️ Batalha Naval em C

Este projeto implementa uma versão simplificada do jogo Batalha Naval, desenvolvida em linguagem C, com foco em estruturas de dados (matrizes), lógica de posicionamento e aplicação de habilidades em área.

O código foi desenvolvido como exercício acadêmico, explorando conceitos fundamentais da programação estruturada.

---

🎯 Objetivo do Projeto

Representar um tabuleiro 10x10 utilizando matrizes bidimensionais

Posicionar navios em diferentes orientações:

Horizontal

Vertical

Diagonal principal

Diagonal secundária

Implementar habilidades especiais com áreas de efeito distintas

Exibir o tabuleiro de forma organizada no terminal

---

🧩 Estrutura do Tabuleiro

Dimensão: 10 linhas x 10 colunas

Estados possíveis das posições:

Valor	Significado

0	Água
3	Navio
1	Navio atingido
5	Área afetada por habilidade

---

🚢 Navios Implementados

Todos os navios possuem tamanho 3:

Navio Horizontal

Navio Vertical

Navio Diagonal Principal

Navio Diagonal Secundária

Os navios são posicionados diretamente na matriz do tabuleiro, respeitando os limites da mesma.
---

✨ Habilidades Especiais

O projeto implementa três habilidades com matriz, aplicadas a partir de um ponto de origem:

🔺 Cone
Área triangular
Expande do centro para baixo

➕ Cruz
Linha central horizontal e vertical

🔷 Octaedro
semelhante a um losango
Baseada em distâncias relativas ao centro


Regras de Aplicação
Se a habilidade atingir um navio (3), ele se torna atingido (1)
Caso contrário, a posição é marcada como área afetada (5)

As habilidades respeitam os limites do tabuleiro
---

🖥️ Exibição no Terminal

Colunas identificadas por letras (A–J)
Linhas numeradas (1–10)
Tabuleiro exibido de forma clara e organizada

Exemplo:

=== TABULEIRO BATALHA NAVAL ===
   A B C D E F G H I J
 1 0 0 0 0 0 0 0 0 0 0
 2 0 0 0 0 0 0 0 0 0 0
 ...
🛠️ Tecnologias Utilizadas
Linguagem C
Compilador GCC (ou equivalente)
Execução em terminal

▶️ Como Compilar e Executar
https://github.com/Cursos-TI/desafio-batalha-naval-yaneale.git

📚 Conceitos Trabalhados
Matrizes bidimensionais
Laços de repetição
Condicionais
Controle de limites de memória
Lógica matemática para áreas de efeito
Organização e legibilidade de código

👩‍💻 Autora
Yane Alejandra Brito Gonzalez
yaneale21@gmail.com


---
