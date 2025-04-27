/*Gabriel Santos Afini da Silva
RA 2267284

A01-05 
Crie um vetor com 10 elementos do tipo "double".  Os valores devem ser digitados pelo usuário
(use um laço para fazer a leitura). O programa deve imprimir na tela quais os valores repetidos
(que aparecem mais de uma vez no vetor).
*/

#include <stdio.h>
#include <locale.h>
#define L 10

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	double num[L];
	int i, j;
			
	printf("Digite os valores a serem analisados\n");
	for(i=0;i<L;i++){
		scanf("%lf",&num[i]);
	}
	for(i=0;i<L;i++){
		for(j=i;j<L;j++){
			if((num[i] == num[j]) && (i != j)){
				printf("\nO número [%d]%.1lf e o [%d]%.1lf são iguais\n", i, num[i], j, num[j]); 										
			}
		}
	}
	
	return(0);
}