/*Gabriel Santos Afini da Silva
RA 2267284

A02-02
Desenvolva um programa que encontre o maior elemento de uma matriz 2x3 (2 linhas e 3 colunas)
de valores inteiros (int mat[2][3]). Insira os valores (10, 3, 19, 5, 8, 15) na declaração da matriz.
Crie um laço aninhado para imprimir todos os valores e, em seguida, imprima apenas o maior valor na tela.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int num[2][3] = {10 ,3 ,19 ,5 ,8 ,15}, i, j, maior;
	maior = num[0][0];
		
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(num[i][j]>maior){
				maior=num[i][j];
			}
		}
	}
	printf("O maior numero é: %d", maior);	
	return(0);
}