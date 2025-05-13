#include <iostream>

using namespace std;

int main()
{
    int ouro, prata, bronze, soma;

    cout << "Digite o numero de medalhas de OURO que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> ouro;
    cout << "\nDigite o numero de medalhas de PRATA que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> prata;
    cout << "\nDigite o numero de medalhas de BRONZE que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> bronze;

    soma = ouro + prata + bronze;

    cout << "\nO Brasil ganhou " << soma << " medalhas nas Olimpiadas." << endl;
    return 0;
}
