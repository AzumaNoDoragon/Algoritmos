/*Gabriel Santos Afini da Silva
RA 2267284

A04-04 (extra)
Escreva um programa em C que imprima na tela as tabuadas do 1 at� o 9, conforme
mostrado na figura. Deve haver uma fun��o do tipo void chamada "tabuada( )".
O c�lculo da tabuada e a impress�o na tela deve ser feito dentro dessa fun��o.
Prestem aten��o porque o tamanho da janela do prompt pode influenciar a formata��o da sa�da.
Dentro do comando "printf", evitem usar espa�os entre os n�meros e o simbolo de multiplica��oe
entre os n�meros e s�mbolo de igual. Dessa forma, a sa�da cabe em uma janela pequena, como a do exemplo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define L 10

int main(void){
	setlocale(LC_ALL, "PORTUGUESE");
	int num[L] = {1,2,3,4,5,6,7,8,9}, i, j, mult;

void tabuada(){
	for(i=0;i<=L;i++){
		for(j=0;j<=L;j++){
			mult = num[i] * num[j];
			printf("%dx%d=%d\n", num[i], num[j], mult);
		}
	}
}

	tabuada();
	
	return 0;
}

