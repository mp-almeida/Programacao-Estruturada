#include <iostream>

using namespace std;

int main()
{
    char opc;
    int num1, num2, soma, subtrair, div, mult;
    cout << "Digite + se deseja somar" << endl;
    cout << "Digite - se deseja subtrair" << endl;
    cout << "Digite / se deseja dividir" << endl;
    cout << "Digite * se deseja multiplicar" << endl;
    cout << "Digite S se deseja sair do programa" << endl;
    cin >> opc;
    switch(opc){
        case '+':
            cout << "Digite número1: " << endl;
            cin >> num1;
            cout << "Digite número2: " << endl;
            cin >> num2;
            soma = num1 + num2;
            cout << "Resultado " << soma;
        break;
        case '-':
            cout << "Digite número1: " << endl;
            cin >> num1;
            cout << "Digite número2: " << endl;
            cin >> num2;
            subtrair = num1 - num2;
            cout << "Resultado " << subtrair;
        break;
        case '/':
            cout << "Digite número1: " << endl;
            cin >> num1;
            cout << "Digite número2: " << endl;
            cin >> num2;
            div = num1 / num2;
            cout << "Resultado " << div;
        break;
        case '*':
            cout << "Digite número1: " << endl;
            cin >> num1;
            cout << "Digite número2: " << endl;
            cin >> num2;
            mult = num1 * num2;
            cout << "Resultado " << mult;
        break;
        case 'S':
            cout << "Voce selecionou a opcao sair";
        default:
            cout << "Opcao invalida";
    }

    return 0;
}
