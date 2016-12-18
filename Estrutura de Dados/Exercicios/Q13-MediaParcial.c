#include <stdlib.h>
#include <stdio.h>

int main(){
	float p1,p2,p3;
	printf("Informe valor da P1: ");
	scanf("%f",&p1);
	printf("Informe valor da P2: ");
	scanf("%f",&p2);
	printf("Informe valor da P3: ");
	scanf("%f",&p3);
	float mediaParcial;
	mediaParcial = ((p1*2)+(p2*3)+(p3*4))/9;
	if(mediaParcial >= 7)
	printf("Aprovado. Sua média foi: %.2f\n",mediaParcial);
	else if (mediaParcial <= 3.5)
	printf("Reprovado. Sua média foi: %.2f\n",mediaParcial);
	else 
	printf("Você foi para a Quarta Prova. Sua média foi: %.2f\n",mediaParcial);
return 0;
}
