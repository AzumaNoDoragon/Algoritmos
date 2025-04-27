/*Gabriel Santos Afini da Silva
RA 2267284

A09-01
Faça um programa que 
-abra um arquivo no modo escrita "w"
-escreva a frase "aprendendo a escrever em arquivos"
-feche o arquivo*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	FILE *pont_arq;
	char frase[] = "aprendendo a escrever em arquivos";
	
	pont_arq = fopen("frase.txt","w");	
	
	printf("A frase '%s' esta sendo armazenada no arquivo frase.txt\n", frase);
	fprintf(pont_arq, "%s \n", frase);
	fclose(pont_arq);
	
	printf("\nO arquivo foi criado com sucesso!\n");
	return 0;
}