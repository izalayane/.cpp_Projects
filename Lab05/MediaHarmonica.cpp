#include <iostream>
using namespace std;

double x, y;

double mediaH() {
	double media = (2 * x * y) / (x + y);
	return media;
}

int main() {
	cout << "Digite 2 valores: \n";
	cin >> x >> y;
	cout << "A Media Harmonica dos valores e: " << mediaH();


}

