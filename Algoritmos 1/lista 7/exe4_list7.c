#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça a idade do usuário e apresente uma mensagem 
de acordo com sua faixa etária: 
a. Se for maior ou igual a 65 anos: “você está na melhor idade”; 
b. Se for maior ou igual a 40 anos (e menor que 65): “você está na 
meia idade”; 
c. Se for maior ou igual a 30 anos (e menor que 40): “você é adulto”; 
d. Se for maior ou igual a 18 anos (e menor que 30): “você é adulto 
jovem”; 
e. Se for maior ou igual a 12 anos (e menor que 18): “você é 
adolescente”; 
f. 
Se for maior ou igual a 2 anos (e menor que 12): “você é criança”; 
g. Se não for nenhuma das anteriores (menor de 2 anos): “você é 
bebê”.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade>=65)
		printf("\nVocê está na melhor idade!\n");
	else if(idade>=40)
		printf("\nVocê está na meia idade!\n");
	else if(idade>=30)
		printf("\nVocê é adulto!\n");
	else if(idade>=18)
		printf("\nVocê é adulto jovem!\n");
	else if(idade>=12)
		printf("\nVocê é adolescente!\n");
	else if(idade>=2)
		printf("\nVocê é criança!\n");
	else if(idade>=0)
		printf("\nVocê é um bebê!\n");
	else
		printf("\nVocê não existe!\n");
	
		
	return 0;
}