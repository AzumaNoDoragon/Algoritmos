/*
-Possua uma vari�vel r do tipo inteiro.
-Atribua um valor � vari�vel r.
-Crie um ponteiro para r.
-Use o ponteiro para atribuir um outro valor � r.
-Apresente o valor de r, usando o ponteiro.
*/

#include <stdio.h>

int main(int argc, char** argv){
	int r;
	r = 5;
	int *p;
	p = &r;
	*p = 7;
	
	printf("%d", *p);
	
	return 0;
}