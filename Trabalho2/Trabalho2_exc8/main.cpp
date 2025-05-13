#include <iostream>

using namespace std;

int main()
{
    int ganhoHora, horas, salario;

    cout << "Quanto você ganha por hora? " << endl;
    cin >> ganhoHora;
    cout << "Quantas horas você trabalha por mês? " << endl;
    cin >> horas;
    salario = ganhoHora * horas;
    cout << "O salário é de " << salario << "reais";

    return 0;
}
