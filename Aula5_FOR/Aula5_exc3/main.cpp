#include <iostream>

using namespace std;

int main()
{
    float soma, media;
    int nota;

    for(int i = 1; i <= 10; i++){
        cout << "Digite a nota: " << endl;
        cin >> nota;
        soma += nota;
    }
    media = soma / 10;

    cout << "A m�dia de 10 notas �: " << media;
    return 0;
}
