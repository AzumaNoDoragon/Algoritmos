/* 
Fa�a um programa que:
-Possua uma vari�vel s do tipo float.
-Atribua um valor � vari�vel s.
-Crie um ponteiro para s.
-Use o ponteiro para atribuir um outro valor � s.
-Apresente o valor de s, usando o ponteiro.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	float s = 14.20;
	float *p;
	p = &s;
	*p = 20.200;
	
	printf("%0.2f", *p);
	
	return 0;
}