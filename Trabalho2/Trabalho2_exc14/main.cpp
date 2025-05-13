#include <iostream>

using namespace std;

int main()
{
    int kgPeixe, multa, sobrepeso;

    cout << "Digite o peso do peixe: " << endl;
    cin >> kgPeixe;
    if (kgPeixe <= 50){
        cout << "João não precisa pagar multa";

    }else{
         sobrepeso = kgPeixe - 50;
        multa = sobrepeso * 4;
        cout << "A multa que o João deve pagar é de " << multa << " reais";
        }


    return 0;
}
