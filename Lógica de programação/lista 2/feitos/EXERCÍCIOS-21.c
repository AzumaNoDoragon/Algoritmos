/*Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel do tipo char
chamada sexo. Pe�a ent�o para a pessoa informar por meio do teclado um valor para esta vari�vel. Se
o valor for igual a �M� exiba a seguinte mensagem �Sexo: Masculino�. Se o valor for igual a �F� exiba a
seguinte mensagem �Sexo: Feminino�. Se for outro valor qualquer exiba a seguinte mensagem �Sexo:
Inv�lido!�.*/ 

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
			printf("\nSexo: Inv�lido!\n");	
			}
			
	return 0;
}