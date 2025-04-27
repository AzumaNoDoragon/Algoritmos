/*Gabriel Santos Afini da Silva
RA 2267284

A02-01
Desenvolva um programa que utilize um laço aninhado para preencher uma matriz
uma matriz 3x3 de valores inteiros (int mat[3][3]). Crie um segundo laço
aninhado para imprimir os valores na tela.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int num[3][3], i, j;
		
	printf("Digite os valores para serem inseridos na matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nmatriz [%d,%d] é %d", i, j, num[i][j]);
        }
	}
		
	return(0);
}