#include <iostream>
using namespace std;

int main() {
	int vetor2[] = { 10,56,56,89,89,56,63,89,56,61 };
	int * ptr = &vetor2[0];
	int * ptr2 = &vetor2[1];

	for (int i = 0; i < 10; i += 2) {
		cout << "[" << *ptr << ',' << *ptr2 << "]" << endl;
		ptr += 2;
		ptr2 += 2;
	}
	system("pause");
	return 0;
}