#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    float num1, num2, num3, soma, sub, mult, div, mod;
    int num4, num5;

    cout << "Programa que vai executar algumas opera��es matem�ticas" << endl;

    cout << "Digite o n�mero 1:" << endl;
    cin >> num1;
    cout << "Digite o n�mero 2:" << endl;
    cin >> num2;
    cout << "Digite o n�mero 3:" << endl;
    cin >> num3;
    cout << "Digite o n�mero 4:" << endl;
    cin >> num4;
    cout << "Digite o n�mero 5:" << endl;
    cin >> num5;

    soma = num1 + num2;
    cout << "Soma "<< num1 << " + "<< num2 << " = " << soma << endl;

    sub = num1 - num2;
    cout << "Subtra��o "<< num1 << " - " << num2 <<" = "<< sub << endl;

    mult = num3 * num4;
    cout <<"Multiplica��o "<< num3 << " * " << num4 << " = "<< mult << endl;

    div = num4 / num1;
    cout << "Divis�o "<< num4<< " / "<< num1 << " = "<< setprecision(2) << div << endl;

    mod = num4 % num5;
    cout<< "M�dulo "<< num4 << " % " << num5 << " = " << mod;

    return 0;
}
