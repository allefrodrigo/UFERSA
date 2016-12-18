#include <stdlib.h>
#include <stdio.h>

int main(){
	int qntd;
	int* dinamico;
	printf("Informe quantas");
	scanf("%d",&qntd);
	dinamico = (int*) malloc(qntd*sizeof(int));
	for (int i = 0; i < qntd; i++){
		printf("Informe %d: ",i+1);
		scanf("%d",&dinamico[i]);
}
printf("Terminou");
return 0;
}
