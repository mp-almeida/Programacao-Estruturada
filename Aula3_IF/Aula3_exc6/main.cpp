#include <iostream>

using namespace std;

int main()
{
    int golSaoPaulo, golPalmeiras;

    cout << "Digite a quantidade de gols do São Paulo:" << endl;
    cin >> golSaoPaulo;
    cout << "Digite a quantidade de gols do Palmeiras:" << endl;
    cin >> golPalmeiras;
    if(golSaoPaulo > golPalmeiras)
            cout << "A festa é tricolor!!!";
    else
        {
            cout << "A festa é dos porcos";
        }
    return 0;
}
