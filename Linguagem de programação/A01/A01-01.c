/*Gabriel Santos Afini da Silva
RA 2267284

A01-01 Crie um vetor de 5 posi��es, do tipo float, chamado "notas_alunos".
Fa�a com que o usu�rio digite as notas nas 5 posi��es do vetor. Imprima todas as notas na tela.
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
		printf("\nNota %d � %.1f", i+1, notas_alunos[i]);
	}
	printf("\n");
	
	return (0);
}