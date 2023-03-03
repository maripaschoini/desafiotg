//4 - palavra invertida
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "portuguese");

	string palavra, palavra_invertida;
	cout << "Digite uma palavra para ser invertida: ";
	getline(cin, palavra);


	for (int i = palavra.size() - 1; i >= 0; i--)
	{
		palavra_invertida += palavra[i];
	}

	cout << "A palavra invertida é: " << palavra_invertida;

	return 0;
}
