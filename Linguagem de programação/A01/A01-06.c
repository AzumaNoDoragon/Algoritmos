/*Gabriel Santos Afini da Silva
RA 2267284

A01-06
Crie e inicialize um vetor que possui 10 elementos com os valores inteiros(0, 1, 2, 3, 4, 5, 6, 7, 8 e 9).
Armazene esses valores em ordem inversa (9, 8, 7, 6, 5, 4, 3, 2, 1) em um novo vetor
(que também deve possuir 10 elementos). Imprima o conteúdo do segundo vetor na tela.
*/

// VETOR COM CONSTANTE

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int num[10] = {0,1,2,3,4,5,6,7,8,9}, a, b;
	
	printf("vetor inicial\n");	
	for (a=0;a<10;a++){
		printf("X%d = %d\n", a+1, num[a]);
	}
	a = 1;
	printf("\nVetor inverso\n");
	for (b=9;b>=0;b--){
		printf("X%d = %d\n", a++, num[b]);
	}
				
	return (0);
}


// VETOR COM VARIAVEL
/*
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int num [10], a, b;
	
	printf("Digite os numeros para o vetor\n");
	for (a=0;a<10;a++){
		printf("%d = ", a+1);
		scanf("%d",&num[a]);
	}
	a = 1;
	printf("\nvetor inverso\n");
	for (b=9;b>=0;b--){
		printf("%d = %d\n", a++, num[b]);
	}
				
	return (0);
}*/