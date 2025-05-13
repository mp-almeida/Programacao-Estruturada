#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite numero1: " << endl;
    cin >> num1;
    cout << "Digite numero2: " << endl;
    cin >> num2;

    cout << "Números em ordem crescente" << endl;
    if (num1 >= num2){
        while (num1 >= num2){
            cout << num2 << endl;
            num2++;
        }
    }else{
        while (num2 >= num1){
            cout << num1 << endl;
            num1++;
        }

    }

    return 0;
}
