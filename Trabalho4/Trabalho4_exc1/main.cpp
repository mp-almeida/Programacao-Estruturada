#include <iostream>

using namespace std;

int main()
{
    int numero;
    int contador = 0;
    cout << "Contador de números - aperte 0 para parar" << endl;
    do{
        cin >> numero;
        if (numero != 0){
            contador ++;
        }
    }while (numero != 0);
        cout << "Quantidade de numero digitado: " << contador << endl;
    return 0;
}
