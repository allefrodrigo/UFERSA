#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **p;
	int quantidade;
	int i,j;
	printf("Informe tamanho da matriz: ");
	scanf("%d",&quantidade);
	p = (int **) malloc (quantidade*sizeof(int*));
	for (i = 0; i < quantidade; i++){
	p[i] = (int *) malloc(quantidade*sizeof(int));
	for (j = 0; j < quantidade; j++){
	printf("Informe (%d,%d)",i+1,j+1);
	scanf("%d",&p[i][j]);
}
}
	for (i = 0; i < quantidade; i++){
		for (j = 0; j < quantidade; j++){
		printf("[%d]",p[i][j]);
}
	printf("\n");
}
return 0;
}

