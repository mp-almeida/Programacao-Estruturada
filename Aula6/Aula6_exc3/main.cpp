#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palavra[30];

    cout << "Digite uma palavra:" << endl;
    cin >> palavra;
    cout << "A palavra tem: " << strlen(palavra) << " letras." << endl;
    return 0;
}
