#include <iostream>

using namespace std;

int main()
{
   int num;

    cout << "Digite um n�mero (positivo ou negativo): " << endl;
    cin >> num;

    if(num > 0){
        cout << "N�mero positivo";
    }else if(num == 0) {
        cout << "zero";
    }else {
        cout << "N�mero  negativo";
    }


    return 0;
}
