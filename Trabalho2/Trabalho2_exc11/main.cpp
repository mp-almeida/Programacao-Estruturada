#include <iostream>

using namespace std;

int main()
{
    int salarioB;
    float ir, salarioL;
    cout << "Digite o seu sal�rio bruto: " << endl;
    cin >> salarioB;
    ir = salarioB * 0.07;
    salarioL = salarioB - ir;

    cout << "Sal�rio bruto: " << salarioB << endl;
    cout << "Imposto: " << ir << endl;
    cout << "Sal�rio l�quido: " << salarioL;

    return 0;
}
