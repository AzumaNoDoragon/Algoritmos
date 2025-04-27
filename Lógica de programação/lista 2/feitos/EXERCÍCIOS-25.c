/*Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e acima de 100 folhas custa R$ 0,20. Dado o
total de cópias, informe o total a ser pago.*/ 

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int fo;
	float val, tp;
	
	printf("Para saber o valor a ser pago, digite a quantidade de copias ");
	scanf("%d",&fo);
	
	if (fo > 100){
		val = 0.20;
		}
		else{
			val = 0.25;
			}
	tp = val * fo;
	
	printf("\nSerá pago %.2f por cópia, o valor total pelas cópias será %.2f\n",val,tp);		
			
	return 0;
}