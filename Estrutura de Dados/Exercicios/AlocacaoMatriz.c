#include <stdlib.h>
#include <stdio.h>

int main(){
	int quantidade;
	int** dinamico;
	printf("Informe o tamanho da matriz");
	scanf("%d",&quantidade);
	dinamico = (int**) malloc(quantidade*sizeof(int*));
	for (int i = 0; i < quantidade; i++){
	dinamico[i] = (int*) malloc(quantidade*sizeof(int));
	for (int j = 0; j < quantidade; j++){
	printf("Informe (%d,%d):",i,j);
	scanf("%d",&dinamico[i][j]);
}
}
return 0;
}

