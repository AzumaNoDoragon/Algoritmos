//Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.

#include <stdio.h>
#include <locale.h>

float main(){
	setlocale(LC_ALL,"PORTUGUESE")
	float n1, p1, n2, p2, soma;

	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite o peso da primeira nota: ");
	scanf("%f",&p1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite o peso da segunda nota: ");
	scanf("%f",&p2);
	soma = (p1 * n1 + p2 * n2) / (p1 + p2);
	printf("A nota é %.2f",soma);
	
	return 0;
}