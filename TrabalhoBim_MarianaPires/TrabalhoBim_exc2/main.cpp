#include <iostream>

using namespace std;

int main()
{
    char nome[30];
    int qntIrmao, idade, anoNasc;

    cout << "           Bom dia..." << endl;
    cout << "   Qual é o seu nome: ";
    cin >> nome;
    cout << "\n";

    cout << "   Quantos irmãos você tem?";
    cin >> qntIrmao;
    cout << "\n";

    cout << "   Qual é a sua idade: ";
    cin >> idade;
    anoNasc = 2025 - idade;
    cout << "Então você se chama " << nome << ", tem " << qntIrmao << " irmãos, e nasceu em " << anoNasc << " ?";


    return 0;
}
