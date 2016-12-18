#include <stdlib.h>
#include <stdio.h>

int main(){
	float c1 = 100.00;
	float c2 = 100.00;
	float transferencia;
	printf("Quero transferir R$ ");
	scanf("%f",&transferencia);
	float checkTransfer;

	checkTransfer = c1-transferencia;
	if (checkTransfer < 0){
	printf("SALDO INSUFICIENTE!\n");}
	else {
	c1 = c1 - transferencia;
	c2 = c2 + transferencia;
	printf("TRANSFERENCIA AUTORIZADA!\n");
	printf("SALDO C1: %.2f\n",c1);
	printf("SALDO C2: %.2f\n",c2);
}
return 0;
}



