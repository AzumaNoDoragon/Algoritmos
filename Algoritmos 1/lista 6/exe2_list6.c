#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a o sal�rio de um funcion�rio. Se o sal�rio for
menor do que R$ 1.045, o algoritmo deve apresentar a mensagem �voc�
ganha menos do que um sal�rio m�nimo�. Do contr�rio, o algoritmo deve
apresentar a mensagem �voc� ganha pelo menos um sal�rio m�nimo�.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, salMinimo;
 	salMinimo = 1045;
	  	
    printf("Digite o valor do seu salario: ");
	scanf("%f", &sal);
	
	if(sal<salMinimo){
		printf("Voc� recebe menos que um sal�rio m�nimo");
	} else if (sal==salMinimo){
		printf("Voc� recebe exatamente um sal�rio m�nimo");
	} else {
		printf("Voc� recebe mais que um sal�rio m�nimo");
	}
	
	return 0;
}