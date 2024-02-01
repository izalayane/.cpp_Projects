// crie um programa que use srand(1) da Bibliotecs cstdlib, e em seguida exiba o resultado a cinco chamadas da função rand(). Execute o programa várias vezes.
#include <iostream> // Biblioteca com funções de entrada e saida de dados
#include <cstdlib>
using namespace std;

int main() {

	srand(1); //O 1 significa o valor inicial da semente que gerará valores seguintes.Pseudoaletório->Se repetir da igual

	cout << rand() << endl;
	cout << rand() << endl;
}

// Resposta: O resultado obtido é o mesmo a menos que o valor do parâmetro do srand seja mudado. Isto é, o valor da semente inicial que é responsável por gerar valores pseudoaleatórios.
