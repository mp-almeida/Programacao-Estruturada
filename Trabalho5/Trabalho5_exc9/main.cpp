#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Digite um número inteiro e positivo: " << endl;
    cin >> num;

    if(num % 2 == 0){
        cout << "O numero é par";
    }else {
        cout << "O numero é impar";
    }


    return 0;
}
