#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Programa que recebe dois números e retorna o maior deles" << endl;
    cout << "Digite o primeiro numero: "<< endl;
    cin >> num1;
    cout << "Digite o segundo numero: "<< endl;
    cin >> num2;

    if(num1 > num2){
        cout << "O numero " << num1 << "é maior que" << num2;
    }
    else if(num2 > num1)
        {
            cout << "O numero " << num2 << "é maior que" << num1;
        }
    else
    {
        cout << "O numero " << num1 << " é igual ao numero " << num2;
    }
    return 0;
}
