#include <stdio.h>
#include <stdlib.h>

int main(){
	float raio;
	const float pi = 3.14159;
	printf("Informe o valor do raio (em metros): ");
	scanf("%f",&raio);
	if (raio >= 0){
	printf("Cálculo da area: %.2f m²\n",pi*(raio*raio));
} else
	printf("O número precisa ser POSITIVO\n");
return 0;
}
