#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int matri;
    float nota1,nota2,nota3, media;

    cout << "Digite o número da matrícula: " << endl;
    cin >> matri;

    cout << "Digite a nota1: " << endl;
    cin >> nota1;
    cout << "Digite a nota2: " << endl;
    cin >> nota2;
    cout << "Digite a nota3: " << endl;
    cin >> nota3;
    cout << fixed << setprecision(2) << endl;

    media = (nota1 + (nota2 * 2) + (nota3 * 3)) / 6;
    cout << "Matrícula: " << matri << endl;
    cout << "Nota1: " << nota1 << endl;
    cout << "Nota2: " << nota2 << endl;
    cout << "Nota3: " << nota3 << endl;
    cout << "Media de aproveitamento: " << media << endl;
    if(media >= 9.0){
       cout << "Conceito A" << endl;
       cout << "Aprovado" << endl;
    }else if((media < 9.0) && (media >= 7.5)){
        cout << "Conceito B" << endl;
        cout << "Aprovado" << endl;
    }else if((media < 7.5) && (media >= 6.0)){
        cout << "Conceito C" << endl;
        cout << "Aprovado" << endl;
    }else if((media < 6.0) && (media >= 4.0)){
        cout << "Conceito D" << endl;
        cout << "Reprovado" << endl;
    }else {
        cout << "Conceito E" << endl;
        cout << "Reprovado" << endl;
    }

    return 0;
}
