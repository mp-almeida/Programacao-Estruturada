#include <iostream>

using namespace std;

int main()
{
    int i, taman;


    cout << "Digite o tamanho do vetor: " << endl;
    cin >> taman;
    float vetor[taman], soma=0.0;

    for(i = 0; i < taman; i++){
        cout << "Digite o valor p/ armazenar no vetor: ";
        cin >> vetor[i];
        soma += vetor[i];
    }
    cout << "\nO total do valor da compra foi: " << soma;

    return 0;
}
