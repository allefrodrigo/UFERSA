#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE* pArquivo = fopen("arquivo.txt","w");
	char vTexto[50];
	char c;
	int i;

if (pArquivo == NULL){
	printf("ERRO");
	return 1;
}

fputs("String1!", pArquivo);
fputs("\n", pArquivo);
fputs("String2!", pArquivo);
fclose(pArquivo);

return 0;
}
 
