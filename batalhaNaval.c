#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3
#define HABILIDADE 5

int main(){
    char *letras[1] = {"   A B C D E F G H I J"};
        
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
    //3.1. Posicionar o navio vertical
    int linhaV = 7;
    int colunaV = 1;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    //3.2. Navio Diagona 1
    int linhaD = 0;
    int colunaD = 0;

    for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaD+i][colunaD+i] = navioDiagonal[i];
        }   
    //3.3. Navio Diagona 2
    int linhaD2 = 5;
    int colunaD2 = 6;

    for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linhaD2+i][colunaD2-i] = navioDiagonal2[i];
    }
    //CONSTRUÇÃO DAS HABILIDADE
    int cone[HABILIDADE][HABILIDADE] = {0};
    int cruz[HABILIDADE][HABILIDADE] = {0};
    int octaedro[HABILIDADE][HABILIDADE] = {0};
    int centro = HABILIDADE / 2;
    //CONE
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (i >= centro && j >= centro - (i - centro) && j <= centro + (i - centro)) {
                cone[i][j] = 1;
            }
        }
    }
    //CRUZ
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (i == centro  || j == centro) {
                cruz[i][j] = 1;
            }
        }
    }
    //OCTAEDRO
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            int di = i - centro;
            int dj = j -centro;
            if (di + dj <= centro && di + dj >= -centro &&
            di - dj <= centro && di - dj >= -centro) {
                octaedro[i][j] = 1;
            }
        }
    }
    //APLICAR HABILIDADES
    int origemConeLinha = 6, origemConeColuna = 2;
    int origemCruzLinha = 4, origemCruzColuna = 4;
    int origemOctLinha = 7, origemOctColuna = 7;

    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            //CONE
            int linha = origemConeLinha + i - centro;
            int coluna = origemConeColuna + j - centro;
            if (linha >= 0 && linha < LINHAS && coluna>= 0 
                && coluna < COLUNAS && cone[i][j] == 1) {
                    if (tabuleiro[linha][coluna] == 3) {
                        tabuleiro[linha][coluna] = 1;
                    } else {
                        tabuleiro[linha][coluna] = 5;
                    }
            }
            //CRUZ
            linha = origemCruzLinha + i - centro;
            coluna = origemCruzColuna + j -centro;
            if (linha >= 0 && linha < LINHAS
            && coluna >= 0 && coluna < COLUNAS
        && cruz[i][j] == 1 ){
           if (tabuleiro[linha][coluna] == 3) {
            tabuleiro[linha][coluna] = 1; 
           } else {
            tabuleiro[linha][coluna] = 5;
           }
        }
            //OCTAEDRO
          linha = origemOctLinha + i - centro;
            coluna = origemOctColuna + j - centro;
            if (linha >= 0 && linha < LINHAS
                && coluna >= 0 && coluna < COLUNAS 
                && octaedro[i][j] == 1) {
                if (tabuleiro[linha][coluna] == 3) {
                    tabuleiro[linha][coluna] = 1;
                } else {
                    tabuleiro[linha][coluna] = 5;
                }
            }
        }   
    }

    //4. Exibir o tabuleiro
    printf("=== TABULEIRO BATALHA NAVAL ===\n");

    //5. letras das colunas
    printf("%s \n", letras[0]);

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1 );//numeração das linhas
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;    
}
    
