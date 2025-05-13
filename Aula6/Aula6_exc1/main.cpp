#include <iostream>
#include <iomanip>
#include <cstring>
//#include <locale>
#include <windows.h>
using namespace std;

int main()
{
    //setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    string nome;
    float nota1,nota2,nota3, media;

    cout << "Digite o nome: " << endl;
    getline(cin, nome);
    cout << "Digite a nota: " << endl;
    cin >> nota1;
    cout << "Digite a nota: " << endl;
    cin >> nota2;
    cout << "Digite a nota: " << endl;
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;
    cout << "Nome: " << nome;
    cout << "A média é " << media;
    return 0;
}
