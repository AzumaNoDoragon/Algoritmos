#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a dois valores inteiros. Em seguida, o algoritmo 
deve apresentar primeiro o valor mais baixo e, depois, o valor mais alto. 
Observa��o: fa�a de conta que o usu�rio nunca digitar� o mesmo valor nas 
duas vezes.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite os valores para serem colocados em ordem:\n");
	printf("Valor 1: ");
	scanf("%d", &a);
	printf("Valor 2: ");
	scanf("%d", &b);
	
	if(a==b)
		printf("\nOs valores s�o iguais!\n");
	else if(a<=b)
		printf("\nOs valores ficam na ordem %d, %d\n", a, b);
	else
		printf("\nOs valores ficam na ordem %d, %d\n", b, a);
		
	
	return 0;
}