
//as variaveis contidas dentro dos parentes representam os valores pedidos no arquivo principal.cpp

double area(double a, double b) { //Corpo de uma fun��o simples onde temos o tipo da fun��o e o tipo das variaveis que ir� receber
	return a*b; //Neste caso o retorno nada mais � que a vari�vel a sendo multiplicada pela variavel b
}

double areaTriangulo(double a, double b) {
	return (a*b) / 2; 
}

double areaCirculo(double a) {
	double pi = 3.14159265359; //Como o valor de pi � constante foi criada uma variavel de valor 3.14 para que o usu�rio nao tivesse que digitar toda vez
	return pi*(a*a); //Para evitar usar a fun��o pow(e de chamar a biblioteca cmath) foi utilizado a defini��o (a^2 = a*a)
}

double paralelepipedo(double a, double b, double c) {
	return area(a, b)*c; //Neste caso estamos chamando uma fun��o que j� existe para dentro de outra fun��o;
}

double prisma(double a, double b, double c) {
	return areaTriangulo(a, b)*c; //O principio � mesmo da chamada da fun��o, onde basta colocar o nome da fun��o mais valores das variaveis.
}

double cilindro(double a, double b) {
	return areaCirculo(a)*b;
}

double piramidetriangular(double a, double b,double c){
	return (areaTriangulo(a, b)*c) / 3;	 //Para o 3 dividir o produto da area da base pela altura foi necess�rio separar em parenteses
}

double piramideretangular(double a, double b, double c) {
	return (area(a, b)*c) / 3;
}

double cone(double a, double b) {
	return (areaCirculo(a)*b) / 3;
}
