#include <iostream>

using namespace std;

int main()
{
    int nota1, nota2, media;

    cout << "Insira a nota1:" << endl;
    cin >> nota1;
    cout << "Insira a nota2:" << endl;
    cin >> nota2;
    media = (nota1 + nota2) / 2;
    if((media >= 7) && (media <= 9)){
        cout << "Aprovado";
    }else if(media == 10){
        cout << "Aprovado com Distinção";
    }else{
        cout << "Reprovado";
    }

    return 0;
}
