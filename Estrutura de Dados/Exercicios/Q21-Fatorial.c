#include <stdlib.h>
#include <stdio.h>

int main(){
	int cont, numfat;
	printf("Digite o número que deseja fatorar: ");
	scanf("%d",&numfat);
	for (cont = 1; numfat > 1; numfat = numfat-1)
	cont = cont * numfat;
	printf("Fatorial: %d\n",cont);
return 0;
}
