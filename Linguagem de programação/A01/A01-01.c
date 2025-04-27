/*Gabriel Santos Afini da Silva
RA 2267284

A01-01 Crie um vetor de 5 posições, do tipo float, chamado "notas_alunos".
Faça com que o usuário digite as notas nas 5 posições do vetor. Imprima todas as notas na tela.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	float notas_alunos [5];
	int i;
	
	for (i=0;i<5;i++){
		printf("Digite a nota referente ao aluno\n"); 
		scanf("%f",&notas_alunos[i]);
	}
	
	for (i=0;i<5;i++){
		printf("\nNota %d é %.1f", i+1, notas_alunos[i]);
	}
	printf("\n");
	
	return (0);
}