#include <iostream>

using namespace std;

int main()
{
    int num, soma = 0;
    float media;
    int i = 1;

    for(i; i <= 20; i++){
        cout << "Digite valores inteiros e positivos: " << endl;
        cin >> num;
        if(num % 2 == 0){
            soma += num;
        }
    }
    media = soma / 20.0;

    cout << "A m�dia dos 20 valores � " << media;
    return 0;
}
