#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Programa para determinar o maior de tr�s n�meros dados" << endl;
    cout << "Digite o primeiro numero: "<< endl;
    cin >> num1;
    cout << "Digite o segundo numero: "<< endl;
    cin >> num2;
    cout << "Digite o terceiro numero: "<< endl;
    cin >> num3;

    if((num1 >= num2) && (num1 >= num3)){
        cout << "O maior n�mero � " << num1;
    }
    else if ((num2 >= num1) && (num2 >= num3)){
        cout << "O maior n�mero � " << num2;
    }
    else if ((num3 >= num1) && (num3 >= num2)){
        cout << "O maior n�mero � " << num3;
    }


    return 0;
}
