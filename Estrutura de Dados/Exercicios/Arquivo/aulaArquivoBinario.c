#include <stdlib.h>

int main()
{
	FILE* pArquivo = fopen("arquivo.txt","r");
	char c;

if(pArquivo == NULL){
	printf ("ERRO: Não tem arquivo");
	return 1;
}

while (( c = fgetc(pArquivo) ) != EOF){ //fgetc só recebe o arquivo.
	printf("c = %c \n", c);
}

fclose(pArquivo);
system("pause");
return 0;
}
