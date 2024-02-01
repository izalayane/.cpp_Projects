#include <iostream>
using namespace std;

double gCelsius;

double converter() {
	double gFar = 1.8 * gCelsius + 32;
	return gFar;
}

int main() {

	cout << "Digite o valor de Graus Celsius: \n";
	cin >> gCelsius;
	cout << gCelsius << " Graus Celsius equivale a " << converter() << " Graus Fahrenheit\n";

}
