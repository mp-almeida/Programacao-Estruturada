#include <iostream>

using namespace std;

int main()
{
    char nome [20];
    float km, minuto, vm, conv;

    cout << "Mariana Pires- Velocidade Media" << endl;
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Quantos km andou de bike: " << endl;
    cin >> km;
    cout << "Quantos minutos durou? " << endl;
    cin >> minuto;
    conv = minuto / 60;
    vm = km / conv;

    cout << "Ola " << nome << ", voce percorreu " << km << " km em " << minuto << " minutos, sua velocidade media foi de " << vm;
    return 0;
}
