/*
Possua uma vari�vel t do tipo double.
-Atribua um valor � vari�vel t.
-Crie um ponteiro para t.
-Use o ponteiro para atribuir um valor � t.
-Apresente o valor de t, usando o ponteiro.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	double t = 202.20135;
	double *p;
	p = &t;
	*p = 1000.55;
	
	printf("%0.2f", *p);
	
	return 0;
}