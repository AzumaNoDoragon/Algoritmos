//Calcular a m�dia ponderada obtida por um aluno para 2 notas bimestrais

#include <stdio.h>
#include <locale.h>

float main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float n1, n2, n3, n4, soma;

	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	printf("Digite a quarta nota: ");
	scanf("%f",&n4);	
	soma = (n1 + n2 + n3 + n4) / 4;
	printf("A nota � %.2f",soma);
	
	return 0;
}