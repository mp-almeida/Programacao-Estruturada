#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    if(idade >= 18)
        cout << "Voc� � maior de idade!!!";
    else
        {
            cout << "Voc� n�o � maior de idade!!";
        }
    return 0;
}
