//3 - faturamento do mes
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "portuguese");


	// considerar que o mês tem 5 dias

	float faturamento_diario [5];
	float xml = 0, /*faturamento mensal */ maior = 0, menor = 0, media = 0;
	int contmaiores = 0, diaspositivos = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Informe o valor do faturamento do dia " << i + 1 << ": ";
		cin >> faturamento_diario[i];
		if (faturamento_diario[i] > 0)
		{
			diaspositivos += 1;
		}
		xml += faturamento_diario[i];
	}

	menor = faturamento_diario[0];
	for (int i = 0; i < 5; i++)
	{
		if (faturamento_diario[i] < menor)
			menor = faturamento_diario[i];
	}

	maior = faturamento_diario[0];
	for (int i = 0; i < 5; i++)
	{
		if (faturamento_diario[i] > maior)
			maior = faturamento_diario[i];
	}

	media = xml / diaspositivos;

	for (int i = 0; i < 5; i++)
	{
		if (faturamento_diario[i] > media )
			contmaiores += 1;
	}

	system("CLS");

	cout << "O menor valor de faturamento em um dia do mes foi: R$" << menor << endl;
	cout << "O maior valor de faturamento em um dia do mes foi: R$" << maior << endl;
	cout << "A quantidade de dias em que o faturamento diário foi maior que a média mensal foi de " << contmaiores << " dias.\n";


	return 0;
}
