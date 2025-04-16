#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 10

typedef struct{
    char nome[50], cargo[50];
    float salario;
} funcionario;

int main(){
    setlocale(LC_ALL, "Portuguese");
    funcionario funcionarios[MAX];
    int i, flag = 0;
    float menor;
    
    for(i = 0; i < MAX; i++){
        printf("Vamos cadastrar o %dº funcionario:\n", i + 1);
        
        printf("Digite o nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0';
        
        printf("Digite o cargo: ");
        fgets(funcionarios[i].cargo, sizeof(funcionarios[i].cargo), stdin);
        funcionarios[i].cargo[strcspn(funcionarios[i].cargo, "\n")] = '\0';
        
        printf("Digite o salario: ");
        scanf("%f", &funcionarios[i].salario);
        getchar();
        printf("\n");
    }
    
    menor = funcionarios[0].salario;
    for(i = 1; i < MAX; i++){
        if(funcionarios[i].salario < menor){
            menor = funcionarios[i].salario;
            flag = i;
        }
    }
    
    for(i = 0; i < MAX; i++){
        printf("\n%dº funcionario cadastrado, verifique se as informações estão corretas:\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario: %0.2f\n", funcionarios[i].salario);
    }

    printf("\n\nO menor salario é do funcionario nº: %d\n", flag + 1);
    printf("Nome: %s\n", funcionarios[flag].nome);
    printf("Cargo: %s\n", funcionarios[flag].cargo);
    printf("Salario: %0.2f\n", funcionarios[flag].salario);
    
    return 0;
}
