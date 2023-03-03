//2 - informar um numero e calcular fibonacci. retornar se o número pertence a sequencia
#include <iostream>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int numero, n1 = 0, n2 = 1, n3, resp;
	cout << "Informe um número que será o limite da sequência: ";
	cin >> numero;

	for (int i = 0; i < numero; i++)
	{
		cout << n1 << " - " ;
		if (n1 == numero)
		{
			resp = 1;
		}

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

	}
	cout << endl;
	if (resp == 1)
		cout << "O número digitado pertence a sequência. \n";
	else
	{
		cout << "O número digitado não pertence a sequência. \n";
	}




	return 0;
}
