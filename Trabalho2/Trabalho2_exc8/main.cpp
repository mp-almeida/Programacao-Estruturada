#include <iostream>

using namespace std;

int main()
{
    int ganhoHora, horas, salario;

    cout << "Quanto voc� ganha por hora? " << endl;
    cin >> ganhoHora;
    cout << "Quantas horas voc� trabalha por m�s? " << endl;
    cin >> horas;
    salario = ganhoHora * horas;
    cout << "O sal�rio � de " << salario << "reais";

    return 0;
}
