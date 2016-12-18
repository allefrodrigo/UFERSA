#include <stdlib.h>
#include <stdio.h>


int main(){
int qtd;
float valor;
char produto[30];
FILE*pArquivo = fopen("arquivo.txt","r");

if (pArquivo == NULL){
	printf("ERRO");
	return 1;
}

while (fscanf(pArquivo,"%s %f\n", &produto, &valor,&qtd) != EOF)
{
printf ("produto = %s valor %f \n", produto, valor);
}

fclose(pArquivo);
return 0;
}

