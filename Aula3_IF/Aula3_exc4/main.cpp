#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    if(idade >= 18)
        cout << "Você é maior de idade!!!";
    else
        {
            cout << "Você não é maior de idade!!";
        }
    return 0;
}
