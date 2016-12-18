#include <stdlib.h>
#include <stdio.h>

int main(){
	float p1,p2,p3;
	printf("Informe P1:");
	scanf("%f",&p1);
	printf("Informe P2:");
	scanf("%f",&p2);
	printf("Informe P3:");
	scanf("%f",&p3);
	float mediaParcial = (p1*2+p2*3+p3*4)/9;
	if (mediaParcial < 3.5)	
	printf("Reprovado. Média: %.2f\n",mediaParcial);
	else if(mediaParcial < 7){
	float mediaPassar = 7;
	float p4 = ((mediaPassar*10)-(mediaParcial*7))/3;
printf("Quarta prova. Média %.2f - Você precisa de %.2f para ser aprovado com nota 7.00\n",mediaParcial,p4);
	}
	else
	printf("Aprovado! Média: %.2f\n",mediaParcial);
return 0;
}
