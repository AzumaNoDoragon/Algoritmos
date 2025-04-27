/*Escreva um programa em linguagem C que contenha a declaração de uma variável do tipo char
chamada sexo. Peça então para a pessoa informar por meio do teclado um valor para esta variável. Se
o valor for igual a ‘M’ exiba a seguinte mensagem “Sexo: Masculino”. Se o valor for igual a ‘F’ exiba a
seguinte mensagem “Sexo: Feminino”. Se for outro valor qualquer exiba a seguinte mensagem “Sexo:
Inválido!”.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	char sexo[4];
	
	printf("Digite a incial do seu sexo: ");
	fflush(stdin);
	gets(sexo);
	
	if(strcmp(strupr(sexo),"M") == 0){
		printf("\nSexo: Masculino!\n");
		}
		else if(strcmp(strupr(sexo),"F") == 0){
			printf("\nSexo: Feminino!\n");
			}
			else{
			printf("\nSexo: Inválido!\n");	
			}
			
	return 0;
}