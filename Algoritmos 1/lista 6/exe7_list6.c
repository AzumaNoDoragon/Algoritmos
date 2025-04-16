#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça o nome de um usuário. Em seguida, o 
algoritmo deve pedir o gênero do usuário (‘f’ para feminino e ‘m’ para 
masculino). Se o usuário for do sexo feminino, apresentar a mensagem 
“Olá, senhora <nome>“. Do contrário, apresentar a mensagem “Olá, senhor 
<nome>“. Observação: faça de conta que o usuário sempre digitará ‘f’ ou 
‘m’. 
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	char user[10], gen;
	
	printf("Digite seu usuário: ");
	scanf("%s", &user);
	printf("Digite seu gênero (f para feminino, m para masculino): ");
    scanf(" %c", &gen);

    // Verifica e imprime a mensagem apropriada
    if (gen == 'f') {
        printf("Olá, senhora %s!\n", user);
    } else if (gen == 'm') {
        printf("Olá, senhor %s!\n", user);
    } else {
        printf("Gênero não reconhecido.\n");
    }
	
	return 0;
}