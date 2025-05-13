#include <iostream>

using namespace std;

int main()
{
    float valor, calculo;

    cout << "Digite um valor" << endl;
    cin >> valor;
    calculo = valor * 0.12;

    cout << "12% de " << valor << " é " << calculo;
    return 0;
}
