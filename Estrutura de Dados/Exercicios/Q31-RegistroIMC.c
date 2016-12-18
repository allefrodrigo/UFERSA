#include <stdlib.h>
#include <stdio.h>

typedef struct Pessoa{
	char nome[20];
	int idade;
	float peso;
	float altura;
	char sexo;
}

int main(){
	Pessoa Clientes[3];	

	for (int i = 0; i < 3; i++){
	printf("Informe o nome do cliente: ");
	scanf("%s",Clientes[i].nome);
	printf("Informe a idade do cliente: ");
	scanf("%d",Clientes[i].idade);
	printf("Informe o peso: ");
	scanf("%f",&Clientes[i].peso);
	printf("Informe a altura: ");
	scanf("%f",&Clientes[i].altura);
	printf("Informe o sexo: ");
	scanf("%s",&Cliente[i].sexo);
}
printf("Clientes cadastrados!\n");
return 0;
}

		
