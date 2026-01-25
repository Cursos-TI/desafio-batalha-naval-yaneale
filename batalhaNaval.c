#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main(){
    char *letras[1] = {"   A B C D E F G H J I"};
        
    //1. Criando o Tabuleiro
    int tabuleiro[LINHAS][COLUNAS];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    //2. Criar os navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioDiagonal[3] = {3, 3, 3};
    int navioDiagonal2[3] = {3, 3, 3};

    //3. Posição dos navios horizontal
    int linhaH = 3;
    int colunaH = 4;
    
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }
    //3.1 Posicionar o navio vertical
    int linhaV = 7;
    int colunaV = 1;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    //3.2 Navio Diagona 1
    int linhaD = 0;
    int colunaD = 0;

    for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaD+i][colunaD+i] = navioDiagonal[NAVIO];
        }   
    //3.3 Navio Diagona 2
    int linhaD2 = 5;
    int colunaD2 = 6;

    for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaD2+i][colunaD2-i] = navioDiagonal2[NAVIO];
    }
    
    //5. Exibir o tabuleiro
    printf("=== TABULHEIRO BATALHA NAVAL ===\n");

    //letras das colunas
    printf("%s \n", letras[0]);

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1 );//numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;    
}

