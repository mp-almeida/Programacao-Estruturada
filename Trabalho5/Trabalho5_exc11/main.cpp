#include <iostream>

using namespace std;

int main()
{
    int num;
    int i = 1;
    int contador = 0;


    for(i; i <= 15; i++){
        cout << "Digite um número positivo ou negativo: " << endl;
        cin >> num;

        if(num < 0){
            contador += 1;
        }
    }
    cout << "Quantidade de num negativos: " << contador;

    return 0;
}
