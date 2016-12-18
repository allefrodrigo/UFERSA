#include <iostream> 
#include "Geometrias.h" //Chamando biblioteca criada pelo usuario Geometrias.h, que contém os protótipos das funções
using namespace std; //utilizado pra encurtar o std::cout para cout por exemplo.

int main() {
	//Inicio dos procedimentos para calculo do volume do paralelepipedo.
	cout << "Allef Rodrigo Schmidt - Trabalho Pratico 1 - 2015.2" << endl;
	cout << "------ -- --------------\n";
	cout << "Volume do Paralelepipedo\n";
	cout << "------ -- --------------\n";
	double ladoaParalelepipedo, ladobParalelepipedo, alturaParalelepipedo; //declarando variaveis do tipo double
	cout << "Digite o valor do lado A: ";
	cin >> ladoaParalelepipedo;
	cout << "Digite o valor do lado B: ";
	cin >> ladobParalelepipedo;
	cout << "Digite a altura do paralelepipedo: ";
	cin >> alturaParalelepipedo;
	cout << "Volume: " << paralelepipedo(ladoaParalelepipedo, ladobParalelepipedo, alturaParalelepipedo) << endl; //chamando a função paralelepipedo
	cout << "------ -- --------------\n";
	//Inicio dos procedimentos para calculo do volume do prisma.
	cout << "Volume do Prisma\n";
	cout << "------ -- ------\n";
	double ladoaPrisma, ladobPrisma, alturaPrisma;
	cout << "Digite o valor do lado A: ";
	cin >> ladoaPrisma;
	cout << "Digite o valor do lado B: ";
	cin >> ladobPrisma;
	cout << "Digite a altura do prisma: ";
	cin >> alturaPrisma;
	cout << "Volume: " << prisma(ladoaPrisma, ladobPrisma, alturaPrisma) << endl; //chamando função do volume do prisma
	cout << "------ -- ------\n";
	//Inicio dos procedimentos para calculo do volume do cilindro.
	cout << "Volume do Cilindro\n";
	cout << "------ -- --------\n";
	double raioCilindro, alturaCilindro;
	cout << "Digite o valor do raio do cilindro: ";
	cin >> raioCilindro;
	cout << "Digite a altura do cilindro: ";
	cin >> alturaCilindro;
	cout << "Volume: " << cilindro(raioCilindro, alturaCilindro) << endl; //as variveis inseridas aqui irão para tratamento na função cilindro
	cout << "------ -- --------\n";
	//Inicio dos procedimentos para calculo do volume da piramide triangular.
	cout << "Volume da piramide triangular\n";
	cout << "------ -- -------- ----------\n";
	double ladoaPT, ladobPT, alturaPT;
	cout << "Digite o valor do lado A: ";
	cin >> ladoaPT;
	cout << "Digite o valor do lado B: ";
	cin >> ladobPT;
	cout << "Digite o valor da altura da piramide triangular: ";
	cin >> alturaPT;
	cout << "Volume: " << piramidetriangular(ladoaPT, ladobPT, alturaPT) << endl;
	cout << "------ -- -------- ----------\n";
	//Inicio dos procedimentos para calculo do volume da piramide retangular.
	cout << "Volume da piramide retangular\n";
	cout << "------ -- -------- ----------\n";
	double ladoaPR, ladobPR, alturaPR;
	cout << "Digite o valor do lado A: ";
	cin >> ladoaPR;
	cout << "Digite o valor do lado B: ";
	cin >> ladobPR;
	cout << "Digite o valor da altura da piramide triangular: ";
	cin >> alturaPR;
	cout << "Volume: " << piramideretangular(ladoaPR, ladobPR, alturaPR) << endl;
	cout << "------ -- -------- ----------\n";
	//Inicio dos procedimentos para calculo do volume do cone.
	cout << "Volume do cone\n";
	cout << "------ -- ----\n";
	double raioCone, alturaCone;
	cout << "Informe o raio da base do cone: ";
	cin >> raioCone;
	cout << "Informe a altura do cone: ";
	cin >> alturaCone;
	cout << "Volume: " << cone(raioCone, alturaCone) << endl;
	cout << "------ -- ----\n";
	system("pause");
	return 0;
}