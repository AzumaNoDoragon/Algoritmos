/*
-Possua uma variável r do tipo inteiro.
-Atribua um valor à variável r.
-Crie um ponteiro para r.
-Use o ponteiro para atribuir um outro valor à r.
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