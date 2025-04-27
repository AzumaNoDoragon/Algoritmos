/*Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00.
Escreva um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou
uma mensagem, caso ele n�o tenha direito ao aumento.*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	float sal, som;
	
	printf("Digite seu sal�rio: ");
	scanf("%f",&sal);
	
	if (sal < 500){
		som = (sal * 0.3) + sal;
		printf("\nSeu sal�rio com o reajuste ser�: %.2f\n",som);
		}
		else{
			printf("\nN�o se encontra dentro dos parametros para o reajuste\n");
		}
		 
	return 0;
}

