#include <iostream>

using namespace std;

int main()
{
    int num, mult;

    cout << "Exc7 - Informe um número para que seja apresentada a Tabuada: ";
    cin >> num;


    if((num >= 1) && (num <= 9)){
        cout << "\n\n\n";
        cout << "Tabuada do " << num << endl;
        cout << "***************" << endl;
        for (int i = 1; i <= 10; i++){
            mult = i * num;
            cout << i << " X " << num << " = " << mult << endl;
        }
        cout << "***************";
        }else{
            cout << "Número Inválido";
        }


    return 0;
}
