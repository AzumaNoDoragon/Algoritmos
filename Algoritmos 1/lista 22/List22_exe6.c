#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que pe�a duas notas, calcule a m�dia e informe 
se o aluno est� aprovado (se sua nota for maior ou igual a 6) ou se 
est� de recupera��o (se sua nota for menor que 6).
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
	printf("A m�dia da nota e: %0.2f", result);
}

void pass(float result){
	if(result >= 6){
		printf("\nParab�ns! Voc� foi aprovado!\n");
	} else {
		printf("\nUma pena! Voc� n�o passou!\n");
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