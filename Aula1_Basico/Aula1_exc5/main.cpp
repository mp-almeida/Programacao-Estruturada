#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;
    bool result;

    cout << "Operadores Relacionais" << endl;
    cout << "Digite 3 números: " << endl;
    cin >> num1 >> num2 >> num3;

    result = num1 > num2;
    cout<< "O resultado da operação: num1 < num2, é: " << result << endl;
    result = num2 == num3;
    cout<< "O resultado da operação: num2 == num3, é: " << result << endl;
    result = num3 != num1;
    cout<< "O resultado da operação: num3 != num1, é: " << result << endl;



    return 0;
}
