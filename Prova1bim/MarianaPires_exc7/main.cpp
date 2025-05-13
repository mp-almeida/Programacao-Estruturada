#include <iostream>

using namespace std;

int main()
{
    int num, conta;

    cout << "Informe um numero inteiro positivo para iniciar a musica: ";
    cin >> num;

    for(int i = num; i >= 1; i-= 1){
        cout << "\n" << i << "patinhos foram passear" << endl;
        cout << "Alem das montanhas para brincar" << endl;
        cout << "A mamae gritou: Qua, qua, qua, qua." << endl;
        conta = i - 1;
        if((i > 1) && (conta == 1)){
            cout << "Mas so 1 patinho voltou de la." << endl;
            }else if(i > 1){
                cout << "Mas so " << conta << " patinhos voltaram de la." << endl;
        }else{
            cout << "Mas nenhum patinho voltou de la." << endl;
        }

    }
    return 0;
}
