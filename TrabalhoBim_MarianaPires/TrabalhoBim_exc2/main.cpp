#include <iostream>

using namespace std;

int main()
{
    char nome[30];
    int qntIrmao, idade, anoNasc;

    cout << "           Bom dia..." << endl;
    cout << "   Qual � o seu nome: ";
    cin >> nome;
    cout << "\n";

    cout << "   Quantos irm�os voc� tem?";
    cin >> qntIrmao;
    cout << "\n";

    cout << "   Qual � a sua idade: ";
    cin >> idade;
    anoNasc = 2025 - idade;
    cout << "Ent�o voc� se chama " << nome << ", tem " << qntIrmao << " irm�os, e nasceu em " << anoNasc << " ?";


    return 0;
}
