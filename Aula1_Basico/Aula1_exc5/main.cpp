#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;
    bool result;

    cout << "Operadores Relacionais" << endl;
    cout << "Digite 3 n�meros: " << endl;
    cin >> num1 >> num2 >> num3;

    result = num1 > num2;
    cout<< "O resultado da opera��o: num1 < num2, �: " << result << endl;
    result = num2 == num3;
    cout<< "O resultado da opera��o: num2 == num3, �: " << result << endl;
    result = num3 != num1;
    cout<< "O resultado da opera��o: num3 != num1, �: " << result << endl;



    return 0;
}
