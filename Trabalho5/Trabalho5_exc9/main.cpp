#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Digite um n�mero inteiro e positivo: " << endl;
    cin >> num;

    if(num % 2 == 0){
        cout << "O numero � par";
    }else {
        cout << "O numero � impar";
    }


    return 0;
}
