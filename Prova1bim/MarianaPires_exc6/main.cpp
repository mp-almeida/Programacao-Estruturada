#include <iostream>

using namespace std;

int main()
{
    float ganhoHora, salario;
    int hora;

    cout << "Digite quanto voce ganha por hora:" << endl;
    cin >> ganhoHora;
    cout << "Digite quantas horas voce trabalhou esse mes: " << endl;
    cin >> hora;

    salario = ganhoHora * hora;

    cout << "\nSeu salario total do mes e de R$ " << salario << endl;
    return 0;
}
