#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    float num1, num2, num3, soma, sub, mult, div, mod;
    int num4, num5;

    cout << "Programa que vai executar algumas operações matemáticas" << endl;

    cout << "Digite o número 1:" << endl;
    cin >> num1;
    cout << "Digite o número 2:" << endl;
    cin >> num2;
    cout << "Digite o número 3:" << endl;
    cin >> num3;
    cout << "Digite o número 4:" << endl;
    cin >> num4;
    cout << "Digite o número 5:" << endl;
    cin >> num5;

    soma = num1 + num2;
    cout << "Soma "<< num1 << " + "<< num2 << " = " << soma << endl;

    sub = num1 - num2;
    cout << "Subtração "<< num1 << " - " << num2 <<" = "<< sub << endl;

    mult = num3 * num4;
    cout <<"Multiplicação "<< num3 << " * " << num4 << " = "<< mult << endl;

    div = num4 / num1;
    cout << "Divisão "<< num4<< " / "<< num1 << " = "<< setprecision(2) << div << endl;

    mod = num4 % num5;
    cout<< "Módulo "<< num4 << " % " << num5 << " = " << mod;

    return 0;
}
