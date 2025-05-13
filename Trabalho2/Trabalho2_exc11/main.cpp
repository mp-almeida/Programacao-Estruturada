#include <iostream>

using namespace std;

int main()
{
    int salarioB;
    float ir, salarioL;
    cout << "Digite o seu salário bruto: " << endl;
    cin >> salarioB;
    ir = salarioB * 0.07;
    salarioL = salarioB - ir;

    cout << "Salário bruto: " << salarioB << endl;
    cout << "Imposto: " << ir << endl;
    cout << "Salário líquido: " << salarioL;

    return 0;
}
