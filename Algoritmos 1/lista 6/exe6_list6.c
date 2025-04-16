#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça uma nota N1 e, em seguida, uma nota N2. O 
algoritmo deve calcular a média das duas notas e apresentar a mensagem 
“Aprovado”, caso o resultado seja maior ou igual a 6; ou “Reprovado”, caso 
o resultado seja inferior a 6. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	
	printf("Digite a nota: ");
	printf("\nNota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf("A nota foi %0.2f! \nLogo o aluno está: ", media);
	
	if (media >= 6)
		printf("Aprovado!\n");
	else
		printf("Reprovado!\n");
	
	return 0;
}