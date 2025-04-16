#include <stdio.h>
#include <locale.h>

int media(float n1, float n2, float n3, float n4){
	int result;
	result = (n1 + n2 + n3 + n4) / 4;
	return(result);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, nota;
	int freq;
	printf("Digite as notas do aluno");
	printf("\n");
	printf("nota 1: ");
	scanf("%f", &n1);
	printf("nota 2: ");
	scanf("%f", &n2);
	printf("nota 3: ");
	scanf("%f", &n3);
	printf("nota 4: ");
	scanf("%f", &n4);
	nota = media(n1, n2, n3, n4);
	
	printf("Digite a frequencia ");
	scanf("%d", &freq);
	
	printf("\n");
	
	printf("A nota do aluno foi %0.2f e frequencia foi %d\n", nota, freq);
	
	printf("\n");
	
	if(nota>=9) {
		if(freq>=75) {
			printf("O aluno passou com êxito.");
		} else if(freq>=50) {
			printf("O aluno passou com ótima nota, o que equipara as faltas.");
		} else if(freq<50) {
			printf("O aluno reprovou. A nota esta ótima, mas é necessario pelo menos 50 de presença.");
		}
	} else if(nota>=6) {
		if(freq>=75) {
			printf("O aluno passou na matéria.");
		} else if(freq<75) {
			printf("O aluno reprovou, pois a única nota que convalida falta é acima de 9.");	
		}
	} else if(nota>=4) {
		if(freq>=75) {
			printf("O aluno esta de recuperação.");
		} else if(freq<75) {
			printf("O aluno reprovou, para entrar em recuperação o aluno precisa de 75 de frequencia.");
		}
	}
	else {
		printf("O aluno reprovou");
	}
	printf("\n");
}