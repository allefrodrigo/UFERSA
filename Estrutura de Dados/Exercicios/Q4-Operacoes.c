#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Informe o 1o. Número: ");
	scanf("%d",&a);
	printf("Informe o 2o. Número: ");
	scanf("%d",&b);
	printf("SOMA:%d\n",a+b);
	printf("SUBTRAÇÃO:%d\n",a-b);
	printf("MULTIPLICAÇÃO:%d\n",a*b);
	printf("DIVISÃO:%.3f\n",(float)a/b);
	return 0;	
}
