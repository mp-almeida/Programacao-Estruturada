#include <iostream>
#include <cstdlib>
#include <cstring>
#include <studio>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

    setlocale (LC_ALL, "Portuguese");

    int num1, num2, num3, resultpre, resultfinal;
    cout << "Programa de soma de 3 números \n";
    cout << "Número 1: \n";
    cin >> num1;
    cout << "Número 2: \n";
    cin >> num2;
    resultpre = num1+num2;
    cout << "Número 3: \n";
    cin >> num3;
    resultfinal = resultpre + num3;
    cout << "A soma dos 3 números é: " << resultfinal;

    return 0;
}
