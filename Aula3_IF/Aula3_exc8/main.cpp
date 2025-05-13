#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Programa para determinar o maior de três números dados" << endl;
    cout << "Digite o primeiro numero: "<< endl;
    cin >> num1;
    cout << "Digite o segundo numero: "<< endl;
    cin >> num2;
    cout << "Digite o terceiro numero: "<< endl;
    cin >> num3;

    if((num1 >= num2) && (num1 >= num3)){
        cout << "O maior número é " << num1;
    }
    else if ((num2 >= num1) && (num2 >= num3)){
        cout << "O maior número é " << num2;
    }
    else if ((num3 >= num1) && (num3 >= num2)){
        cout << "O maior número é " << num3;
    }


    return 0;
}
