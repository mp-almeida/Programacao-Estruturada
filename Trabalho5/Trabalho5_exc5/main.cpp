#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char nome[50];
    float valor, desconto, valorFinal;
    cout << "Digite o nome do produto: " << endl;
    cin >> nome;
    cout << "Valor do produto: " << endl;
    cin >> valor;

    desconto = valor * 0.13;
    valorFinal = valor - desconto;

    cout << "Produto: " <<  setw(10) << nome << endl;
    cout << "Valor: " <<  setw(10) << valor << endl;
    cout << "Desconto: " <<  setw(10) << desconto << endl;
    cout << "Valor final: " <<  setw(10) << valorFinal;
    return 0;
}
