#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE* pArquivo = fopen("arquivo.txt","w");
	
if (pArquivo == NULL){
	printf("ERRO");
	return 1;
}		



fprintf(pArquivo, "%.2f", 7.56);

return 0;
}

