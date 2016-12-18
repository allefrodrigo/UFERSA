#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	printf("Informe o número: ");
	scanf("%d",&a);
	switch(a){
	case 1: printf("UM\n");
	break;
	case 2: printf("DOIS\n");
	break;
	case 3: printf("TRÊS\n");
	break;
	case 4: printf("QUATRO\n");
	break;
	case 5: printf("CINCO\n");
	break;
	default: printf("Valor invalido\n");
	break;
}
return 0;
}

