#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	float altura, peso;
	printf("Informe sua altura: ");
	scanf("%f",&altura);
	printf("Informe seu peso: ");
	scanf("%f",&peso);
	float imc = peso/pow(altura,2);
	printf("Seu IMC é: %.2f\n",imc);
return 0;
}

