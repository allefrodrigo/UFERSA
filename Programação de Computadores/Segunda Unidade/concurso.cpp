#include "concurso.h"
using namespace std;

int main() {
	int numPar, numQuest;
	char ch;
	cout << "Qual o numdero de participantes? ";
	cin >> numPar;
	cout << "Qual o numero de questoes? ";
	cin >> numQuest;
	questions * questoes = new questions[numQuest*numPar];
	linhaGrossa(30);
	cout << endl;
	int z = 0;
	stats Media;
	Media.dif_Med = 0;
	Media.temp_Med = 0;
	for (int t = 0; t < (numPar); t++) {
		cout << "Participante " << t + 1 << endl;
		linhaFina(15);
		char letra = 'A';

		for (int x = 0; x < numQuest; x++) {

			cout << "Questao " << letra << endl;
			cout << "\tDificuldade: ";
			cin >> questoes[z].dificuldade;
			cout << "\tInicio: ";
			cin >> questoes[z].inicio.hora >> ch >> questoes[z].inicio.minuto;
			cout << "\tFim: ";
			cin >> questoes[z].fim.hora >> ch >> questoes[z].fim.minuto;
			Media.temp_Med += func_Calc(questoes[z].inicio, questoes[z].fim);
			Media.dif_Med += questoes[z].dificuldade;
			letra++;
			z = z + 1;
			cout << endl;
		}
		linhaGrossa(30);
		cout << endl;
	}
	cout << "Estatisticas" << endl;
	linhaFina(20);
	cout << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Concurso : " << "Dificuldade media (" << Media.dif_Med /z << ") " << '-' << " Tempo medio (" << (float)(Media.temp_Med / z) <<" minutos)" << endl;
	cout << "deu ceddrto" << endl;
	system("pause");
	return 0;
}