#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/* >>> ALTEREI UM POUCO O FUNCIONAMENTO, PARA FICAR COMO UM JOGO <<<
Preencher um vetor com números inteiros (8 unidades); solicitar um número do teclado; 
pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir, imprimir MSG que não existe.
*/

int main(){
	srand(time(NULL));
	int i, j, flag = 0, num[8], var[8];
	
	for(i = 0; i < 8; i++){
		var[i] = rand() % 100;
	}
	
	printf("Digite um valor de 0 a 99 para adivinhar algum numero do vetor\n");
	for(i = 0; i < 8; i++){
		printf("Numero %d: ", i + 1);
		scanf("%d", &num[i]);
	}

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if(num[j] == var[i]){
				printf("Acertou o numero %d no indice %d do vetor.\n", num[j], i);
				flag += 1; 
			}
		}
	}
	
	if(flag == 0){
		printf("\nNao acertou nenhum numero.");
	} else{
		printf("\nFez %d acertos.", flag);
	}
	
	printf("\n\nAqui sao todos os valores:");
	for(i = 0; i < 8; i++){
		printf("%d ", var[i]);
	}
	
	printf("\n");
	
	return 0;
}