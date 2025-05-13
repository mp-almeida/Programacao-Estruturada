#include <iostream>

using namespace std;

int main()
{
    int senha;


    cout << "Digite sua senha: ";
    cin >> senha;
    if(senha == 1234){
        cout << "Senha Correta. ";
    }else {
        cout << "Senha Incoreta." << endl;
        cout << "Digite sua senha: ";
        cin >> senha;
        if(senha == 1234){
        cout << "Senha Correta.";
    }else if(senha != 1234){
        cout << "Senha Incoreta" << endl;
        cout << "Digite sua senha: ";
        cin >> senha;
        if (senha == 1234){
        cout << "Senha Correta";
    }else {
        cout << "Senha Incoreta";
    }}}

    return 0;
}
