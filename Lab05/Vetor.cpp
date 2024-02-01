#include <iostream>
#include <cmath>
using namespace std;

double vetor(int x, int y);

int main() {
	int x, y;
	cout << "Digite as coordenadas do Vetor: \n";
	cin >> x >> y;
	cout << "O tamanho do vetor e: " << vetor(x, y);
}

double vetor(int x, int y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}

