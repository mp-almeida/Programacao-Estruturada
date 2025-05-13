#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Digite um número: " << endl;
    cin >> num1;
    cout << "Digite um número: " << endl;
    cin >> num2;
    cout << "Digite um número: " << endl;
    cin >> num3;
    if((num1 >= num2) && (num1 >= num3)){
        cout << "O maior número é " << num1;
    }else if((num2 >= num1) && (num2 >= num3)){
            cout << "O maior número é " << num2;
        }else{
                cout << "O maior número é " << num3;
            }

    return 0;
}
