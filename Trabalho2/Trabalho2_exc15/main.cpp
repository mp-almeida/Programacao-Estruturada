#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Digite um n�mero: " << endl;
    cin >> num;

    if(num > 0){
        cout << "O n�mero � positivo";
    }else{
            cout << "O n�mero � negativo";
        }

    return 0;
}
