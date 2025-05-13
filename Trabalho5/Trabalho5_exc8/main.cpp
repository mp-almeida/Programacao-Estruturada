#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char sexo[2];
    float altura, pesoid;

    cout << "Seu sexo: feminino(F) ou masculino(M): " << endl;
    cin >> sexo;
    cout << "Sua altura (ex: 1.65): " << endl;
    cin >> altura;

    if(sexo[0] == 'F'){
        pesoid = (62.1 * altura) - 44.7;
    }else {
        pesoid = (72.7 * altura) - 58;
    }
    cout << "Sexo: " << sexo << endl;
    cout << fixed << setprecision(2);
    cout << "Altura: " << altura << endl;
    cout << "Seu peso ideal é: " << pesoid;

    return 0;
}
