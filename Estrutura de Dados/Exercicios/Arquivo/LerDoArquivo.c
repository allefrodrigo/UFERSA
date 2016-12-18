#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE* pArquivo = fopen("arquivo.txt","r");
	char vLinha[50];
	char* r;

	if (pArquivo == NULL){
	printf("ERRO");
	return 0;
}

while (fgets(vLinha, sizeof(vLinha), pArquivo) != NULL )
{
printf("linha = %s", vLinha);
}

fclose(pArquivo);
return 0;
}
