#include <iostream>

using namespace std;

int main()
{
    float faren, grau;

    cout << "Mariana Pires- Farenheit para Celsius" << endl;
    cout << "Conversão de Farenheit para Celsius" << endl;
    cout << "Digite graus em Farenheit" << endl;
    cin >> faren;

    grau = ((faren - 32) * (5.0 / 9.0));
    cout << faren << " Farenheit  = " << grau << " Celsius";
    return 0;
}
