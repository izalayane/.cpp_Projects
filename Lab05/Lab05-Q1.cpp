#include <iostream>
using namespace std;

void alarme();
int lerSenha();

int main() {
	cout << "Inicializando...\n";
	alarme();
	cout << "Digite a senha: \n";
	cout << lerSenha();
}

void alarme() {
	cout << '\a' << endl;  // Comando para fazer barulho de Beep na tela.
}

int lerSenha() {
	int n;
	cin >> n;
	return n;
}
