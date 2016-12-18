
//as variaveis contidas dentro dos parentes representam os valores pedidos no arquivo principal.cpp

double area(double a, double b) { //Corpo de uma função simples onde temos o tipo da função e o tipo das variaveis que irá receber
	return a*b; //Neste caso o retorno nada mais é que a variável a sendo multiplicada pela variavel b
}

double areaTriangulo(double a, double b) {
	return (a*b) / 2; 
}

double areaCirculo(double a) {
	double pi = 3.14159265359; //Como o valor de pi é constante foi criada uma variavel de valor 3.14 para que o usuário nao tivesse que digitar toda vez
	return pi*(a*a); //Para evitar usar a função pow(e de chamar a biblioteca cmath) foi utilizado a definição (a^2 = a*a)
}

double paralelepipedo(double a, double b, double c) {
	return area(a, b)*c; //Neste caso estamos chamando uma função que já existe para dentro de outra função;
}

double prisma(double a, double b, double c) {
	return areaTriangulo(a, b)*c; //O principio é mesmo da chamada da função, onde basta colocar o nome da função mais valores das variaveis.
}

double cilindro(double a, double b) {
	return areaCirculo(a)*b;
}

double piramidetriangular(double a, double b,double c){
	return (areaTriangulo(a, b)*c) / 3;	 //Para o 3 dividir o produto da area da base pela altura foi necessário separar em parenteses
}

double piramideretangular(double a, double b, double c) {
	return (area(a, b)*c) / 3;
}

double cone(double a, double b) {
	return (areaCirculo(a)*b) / 3;
}
