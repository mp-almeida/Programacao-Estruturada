#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1: " << endl;
    cin >> palavra1;
    cout << "Digite a palavra 2: " << endl;
    cin >> palavra2;

    if(strcmp(palavra1, palavra2) == 0){
        cout << "As palavras s�o iguais";
    }else{
        cout << "As palavras s�o diferentes";
    }
    return 0;
}
