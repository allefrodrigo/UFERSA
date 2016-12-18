#include <stdlib.h>
#include <stdio.h>

int main(){
	const int tamVet = 10;
	int vetorData[tamVet];
	printf("Insira os dados dos vetores\n");
	for (int i = 0; i < tamVet;i++){
	printf("VET(%d) = ",i);
	scanf("%d",&vetorData[i]);
	}
	printf("Vetores inseridos\n");
	printf("Lendo vetores...\n");
	for (int i = 0; i < tamVet;i++){
	printf("%d ",vetorData[i]);
	}
	printf("\n");
	return 0;
}
