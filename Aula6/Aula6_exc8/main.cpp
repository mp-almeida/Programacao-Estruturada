#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palavra[30];
    cout << "Este exemplo inverte palavras" << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "Substituindo " << strset(palavra,'*');
    return 0;
}
