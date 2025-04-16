#include <stdio.h>

int main(){
	float n;
	
	do{
		printf("Digite a nota do aluno: ");
		scanf("%f", &n);		  	
	}while(n > 100 || n < 1);
	printf("Bye-Bye...");	
	
	return 0;
}