#include <iostream>

using namespace std;

int main()
{
    int golSaoPaulo, golPalmeiras;

    cout << "Digite a quantidade de gols do S�o Paulo:" << endl;
    cin >> golSaoPaulo;
    cout << "Digite a quantidade de gols do Palmeiras:" << endl;
    cin >> golPalmeiras;
    if(golSaoPaulo > golPalmeiras)
            cout << "A festa � tricolor!!!";
    else
        {
            cout << "A festa � dos porcos";
        }
    return 0;
}
