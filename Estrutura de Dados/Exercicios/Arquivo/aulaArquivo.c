#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	FILE* pArquivo = fopen("arquivo.txt","w");
	char vTexto[50];
	char c; //Caractere que será escrito no arquivo.
	int i;

if (pArquivo == NULL){
	printf("ERRO: Não foi aberto");
	return 1;
	}
	
strcpy(vTexto, "Meu texto! Pode ter acentos, não é?"); //Isso que é escrito

for (i = 0; i < strlen(vTexto); i++){
	c = vTexto[i];
	fputc(c,pArquivo); //Função para escrever. 1o char dps arquivo
	}

fclose(pArquivo);
return 0;
}
