#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a a idade do usu�rio e apresente uma mensagem 
de acordo com sua faixa et�ria: 
a. Se for maior ou igual a 65 anos: �voc� est� na melhor idade�; 
b. Se for maior ou igual a 40 anos (e menor que 65): �voc� est� na 
meia idade�; 
c. Se for maior ou igual a 30 anos (e menor que 40): �voc� � adulto�; 
d. Se for maior ou igual a 18 anos (e menor que 30): �voc� � adulto 
jovem�; 
e. Se for maior ou igual a 12 anos (e menor que 18): �voc� � 
adolescente�; 
f. 
Se for maior ou igual a 2 anos (e menor que 12): �voc� � crian�a�; 
g. Se n�o for nenhuma das anteriores (menor de 2 anos): �voc� � 
beb�.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade>=65)
		printf("\nVoc� est� na melhor idade!\n");
	else if(idade>=40)
		printf("\nVoc� est� na meia idade!\n");
	else if(idade>=30)
		printf("\nVoc� � adulto!\n");
	else if(idade>=18)
		printf("\nVoc� � adulto jovem!\n");
	else if(idade>=12)
		printf("\nVoc� � adolescente!\n");
	else if(idade>=2)
		printf("\nVoc� � crian�a!\n");
	else if(idade>=0)
		printf("\nVoc� � um beb�!\n");
	else
		printf("\nVoc� n�o existe!\n");
	
		
	return 0;
}