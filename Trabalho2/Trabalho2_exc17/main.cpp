#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Digite um n�mero: " << endl;
    cin >> num1;
    cout << "Digite um n�mero: " << endl;
    cin >> num2;
    cout << "Digite um n�mero: " << endl;
    cin >> num3;
    if((num1 >= num2) && (num1 >= num3)){
        cout << "O maior n�mero � " << num1;
    }else if((num2 >= num1) && (num2 >= num3)){
            cout << "O maior n�mero � " << num2;
        }else{
                cout << "O maior n�mero � " << num3;
            }

    return 0;
}
