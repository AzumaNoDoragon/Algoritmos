#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que peça duas notas, calcule a média e informe 
se o aluno está aprovado (se sua nota for maior ou igual a 6) ou se 
está de recuperação (se sua nota for menor que 6).
*/

int count = 1;

float nota(){
	float n;
	
	printf("Digite a nota %d: ", count);
	scanf("%f", &n);
	
	count++;
	
	return n;
}

float media(float n1, float n2){
	return ((n1 + n2) / 2);
}

void show(float result){
	printf("A média da nota e: %0.2f", result);
}

void pass(float result){
	if(result >= 6){
		printf("\nParabéns! Você foi aprovado!\n");
	} else {
		printf("\nUma pena! Você não passou!\n");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, result;
	
	n1 = nota();
	n2 = nota();
	result = media(n1, n2);
	show(result);
	pass(result);
	
	return 0;
}