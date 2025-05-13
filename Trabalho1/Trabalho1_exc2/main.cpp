#include <iostream>

using namespace std;

int main()
{
    char nome[50];
    float nota1, nota2, nota3, media;

    cout << "Mariana Pires- Calcular Media" << endl;
    cout << "Digite nome do aluno: " << endl;
    cin >> nome;
    cout << "Nota 1: " << endl;
    cin >> nota1;
    cout << "Nota 2: " << endl;
    cin >> nota2;
    cout << "Nota 3: " << endl;
    cin >> nota3;
    media = (nota1 + nota2 + nota3) / 3;

    cout << "Aluno " << nome << " possui media " << media;

    return 0;
}
