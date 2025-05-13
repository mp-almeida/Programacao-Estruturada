#include <iostream>
using namespace std;

int main()
{
    char nome [30];
    char nomeMes [20];
    int mes;

    cout << "Digite o seu nome: " << endl;
    cin >> nome;
    cout << "Digite o numero do mes do seu aniversario: " << endl;
    cin >> mes;

    if(mes == 1){
        cout << "Oi " << nome << ", voce nasceu em Janeiro.";
    }else if(mes == 2){
        cout << "Oi " << nome << ", voce nasceu em Fevereiro.";
    }else if(mes == 3){
        cout << "Oi " << nome << ", voce nasceu em Marco.";
    }else if(mes == 4){
        cout << "Oi " << nome << ", voce nasceu em Abril.";
    }else if(mes == 5){
        cout << "Oi " << nome << ", voce nasceu em Maio.";
    }else if(mes == 6){
        cout << "Oi " << nome << ", voce nasceu em Junho.";
    }else if(mes == 7){
        cout << "Oi " << nome << ", voce nasceu em Julho.";
    }else if(mes == 8){
        cout << "Oi " << nome << ", voce nasceu em Agosto.";
    }else if(mes == 9){
        cout << "Oi " << nome << ", voce nasceu em Setembro.";
    }else if(mes == 10){
        cout << "Oi " << nome << ", voce nasceu em Outubro.";
    }else if(mes == 11){
        cout << "Oi " << nome << ", voce nasceu em Novembro.";
    }else if(mes == 4){
        cout << "Oi " << nome << ", voce nasceu em Dezembro.";
    }

    return 0;
}
