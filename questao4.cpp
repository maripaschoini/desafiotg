//4 - porcentagem
#include <iostream>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "portuguese");

	float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
	float total;
	total = sp + rj + mg + es + outros;

	cout << "Percentual de cada estado mediante valor total (" << total << ") : \n";
	cout << "SP: " << ((sp * 100) / total) << "% \n";
	cout << "RJ: " << ((rj * 100) / total) << "% \n";
	cout << "MG: " << ((mg * 100) / total) << "% \n";
	cout << "ES: " << ((es * 100) / total) << "% \n";
	cout << "Outros: " << ((outros * 100) / total) << "% \n";


	return 0;
}

