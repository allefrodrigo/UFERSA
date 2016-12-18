#include <stdlib.h>
#include <stdio.h>

int main(){
	float refri = 1.50;
	float pizza = 3.00;
	float taxa;
	int quantidade;
	printf("Informe quantos refrigerantes: ");
	scanf("%d",&quantidade);
	float totalRefri = refri*quantidade;
	printf("Informe quantas fatias de pizza: ");
	scanf("%d",&quantidade); //Eu sei que não é uma boa prática
	float totalPizza = pizza*quantidade;
	printf("Quantidade de pessoas na mesa: ");
	int qntPessoas;
	scanf("%d",&qntPessoas);
	float totalPagar;
	taxa = (totalPizza + totalRefri)*0.1;
	totalPagar = (totalPizza + totalRefri+taxa);
	printf("Total a pagar: R$ %.2f\n",totalPagar);
	printf("Total a pagar+taxa: R$ %.2f\n",totalPagar+taxa);
	printf("Rateio por pessoa: %.2f\n",(totalPagar+taxa)/qntPessoas);
return 0;
}
