#include <iostream>

using namespace std;

int main()
{
    int valor, maiorVal = 0;
    int i = 1;

    for(i; i <= 50; i++){
        cout << "Digite um valor: ";
        cin >> valor;
        if (valor > maiorVal){
            maiorVal = valor;
        }
    }
    cout << "\n";
    cout << "O maior valor dentre os 50 valores é: " << maiorVal;

    return 0;
}
