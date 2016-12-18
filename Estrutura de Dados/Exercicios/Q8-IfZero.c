#include <stdlib.h>
#include <stdio.h>

int main(){
	float a,b;
	printf("Informe primeiro número: ");
	scanf("%f",&a);
	printf("Informe o segundo número: ");
	scanf("%f",&b);
	if (b == 0){
	printf("Impossível dividir por ZERO\n");
	}
	else
	printf("Divisão de %.2f e %.2f é: %.2f\n ",a,b,(a/b));

return 0;
}

	

