#include "concurso.h"
void linhaGrossa(int x) {
	for (int i = 0; i < x; i++) {
		cout << '=';
	}
	cout << endl;
}
void linhaFina(int x) {
	for (int i = 0; i < x; i++) {
		cout << '-';
	}
	cout << endl;
}

int func_Calc(horario x, horario y) {
	int inicio, fim;
	inicio = (x.hora * 60) + (x.minuto);
	fim = (y.hora * 60) + (y.minuto);
	return  fim-inicio;

}

/*for (int i = 0; i < (numQuest*numPar); i++) {
cout << questoes[i].inicio.hora << ch << questoes[i].inicio.minuto << endl;
cout << questoes[i].fim.hora << ch << questoes[i].fim.minuto << endl;*/