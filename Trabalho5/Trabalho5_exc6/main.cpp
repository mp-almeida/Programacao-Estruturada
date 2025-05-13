#include <iostream>

using namespace std;

int main()
{
   int num;

    cout << "Digite um número (positivo ou negativo): " << endl;
    cin >> num;

    if(num > 0){
        cout << "Número positivo";
    }else if(num == 0) {
        cout << "zero";
    }else {
        cout << "Número  negativo";
    }


    return 0;
}
