#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palavra[30];
    cout << "Este exemplo inverte palavras" << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "A palavra " << palavra << " invertida fica: " << strrev(palavra);
    return 0;
}
