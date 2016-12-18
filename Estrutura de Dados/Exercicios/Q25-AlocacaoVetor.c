#include <stdio.h>
#include <stdlib.h>

int main(){
printf("Informe quantidade de numeros: ");
int quantidade;
scanf("%d",&quantidade);
int *dinamico;
dinamico = malloc(quantidade*sizeof(int));
printf("*****************\n");
for (int i = 0; i < quantidade; i++){
	printf("Informe (%d)",i+1);
	scanf("%d",&dinamico[i]);
}
printf("******************\n");
for (int i = 0; i < quantidade; i++){
	printf("%d ",dinamico[i]);
}
printf("\n");
return 0;
}
