// Gere valores Rand usando a Biblioteca ctime. Usando If e Else.
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int a;

	srand(time(NULL));

	a = rand();
		cout << "Numero: " << a << endl;

		if (a > 16834) {
			cout << "GRANDE";
		}
		else {
			cout << "PEQUENO";
		}
}
