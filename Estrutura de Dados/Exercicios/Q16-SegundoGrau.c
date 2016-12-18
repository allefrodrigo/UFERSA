#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int delta(int,int,int);
float raizIgual(int, int);
void raiz(int,int,int);
int main(){
	int a,b,c;
	printf("Informe A: ");
	scanf("%d",&a);
	printf("Informe B: ");
	scanf("%d",&b);
	printf("Informe C: ");
	scanf("%d",&c);
	if (delta(a,b,c) == 0)
	{
	printf("/\\ = 0\n"); 
	printf("Raizes IGUAIS\n");
	printf("X1 = X2 = %.2f\n",raizIgual(a,b));
	}
	else if (delta(a,b,c) < 0){
	printf("/\\ = Delta é negativo\n");
	printf("Raiz COMPLEXA\n");
	}
	else{
	printf("/\\ = %d\n",delta(a,b,c));
	raiz(a,b,c);
}
return 0;
}

int delta(int a, int b, int c){
	int calcDelta;
	calcDelta = (b*b)-4*a*c;
	return calcDelta;
}

float raizIgual(int a, int b){
	return -b/(2*a);
}

void raiz(int a, int b, int c){
	printf("X1 = %.2f\n",(-b+sqrt(delta(a,b,c)))/2*a);
	printf("X2 = %.2f\n",(-b-sqrt(delta(a,b,c)))/2*a);
}
