#include <iostream>

using namespace std;

int main()
{
    char letra;

    cout << "Digite uma letra: " << endl;
    cin >> letra;
    if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u')){
        cout << "\nVogal" << endl << endl;
    }else {
        cout << "\nConsoante" << endl << endl;
    }

    return 0;
}
