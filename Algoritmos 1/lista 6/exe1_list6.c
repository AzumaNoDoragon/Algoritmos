#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a o sal�rio de um funcion�rio. Se o sal�rio for
maior do que R$ 10.000, o programa dever� apresentar a mensagem �voc�
ganha bem!�*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int sal;
	
	printf("Digite o seu sal�rio ");
	scanf("%d", &sal);
	
	if(sal>=10000)
		printf("voc� ganha bem!");
	
	return 0;
}