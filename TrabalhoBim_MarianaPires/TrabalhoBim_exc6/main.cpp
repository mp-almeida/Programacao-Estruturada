#include <iostream>

using namespace std;

int main()
{
    int num, mult, i = 1;

    cout << "Exc6 - Informe um n�mero para que seja apresentada a Tabuada: ";
    cin >> num;
    cout << "\n\n\n";

    if((num >= 1) && (num <= 9)){
    cout << "Tabuada do " << num << endl;
    cout << "***************" << endl;
    for (i; i <= 10; i++){
        mult = i * num;
        cout << i << " X " << num << " = " << mult << endl;
    }
    cout << "***************" << endl << endl;
    }else{
        cout << "N�mero inv�lido";
    }
    return 0;
}
