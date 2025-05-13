#include <iostream>

using namespace std;

int main()
{
    int metroPintados, qntResto, qntLataI, qntLataF, precoTotal, rendLata;

    cout << "Digite a quantidade em metros quadrados a area a ser pintada: " << endl;
    cin >> metroPintados;

    rendLata = 18 * 3;
    qntResto = metroPintados % rendLata;
    qntLataI = metroPintados / rendLata;
    if(qntResto != 0){
        qntLataF = qntLataI + 1;
    }else{
        qntLataF = qntLataI;
    }
    precoTotal = qntLataF * 80;

    cout << "Quantidade de lata que serão necessárias: " << qntLataF << endl;
    cout << "Preço total: " << precoTotal << " reias";


    return 0;
}
