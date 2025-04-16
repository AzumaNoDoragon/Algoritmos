#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 15
#define CADEIRAS 100
#define PRECO_INTEIRA 10.00
#define PRECO_MEIA 5.00

/*
Elabore um algoritmo para simular a venda de ingressos para um jogo de futebol, 
sabe-se que o estádio possui 1500 lugares, dispostos em 15 filas de 100 cadeiras cada. O 
preenchimento das cadeiras é aleatório. As cadeiras são representadas: 0 - poltrona vazia, 1 - 
pagante inteira e 2 - pagante meia; 
	a) Ocupação das cadeiras; 
	b) Quantidade de cada tipo de cadeira; 
	c) Valor apurado no jogo, sabendo que o ingresso custa R$ 10,00 (inteira).
*/

int main() {
    srand(time(NULL));

    int estadio[FILAS][CADEIRAS];
    int i, j, vazias = 0, inteiras = 0, meias = 0;
    float total_arrecadado = 0.0;

    for(i = 0; i < FILAS; i++) {
        for (j = 0; j < CADEIRAS; j++) {
            estadio[i][j] = rand() % 3;

            if (estadio[i][j] == 0) {
                vazias++;
            } else if (estadio[i][j] == 1) {
                inteiras++;
                total_arrecadado += PRECO_INTEIRA;
            } else {
                meias++;
                total_arrecadado += PRECO_MEIA;
            }
        }
    }

    printf("Mapa de ocupação do estádio (0 - Vazia, 1 - Inteira, 2 - Meia):\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < CADEIRAS; j++) {
            printf("%d ", estadio[i][j]);
        }
        printf("\n");
    }

    printf("\nResumo da ocupação:\n");
    printf("Cadeiras vazias: %d\n", vazias);
    printf("Pagantes Inteira: %d\n", inteiras);
    printf("Pagantes Meia: %d\n", meias);
    printf("Total arrecadado: R$ %.2f\n", total_arrecadado);

    return 0;
}