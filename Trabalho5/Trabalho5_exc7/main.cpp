#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float valorFinal;
    int cod, quant;
    cout << "Especificação" << setw(10) << "Código" << setw(10) << "Preço" << endl;
    cout << "Cachorro quente" << setw(9) << "100" << setw(10) << "9.20" << endl;
    cout << "Bauru simples" << setw(10) << "101" << setw(10) << "12.00" << endl;
    cout << "Bauru com ovo" << setw(10) << "102" << setw(10) << "13.00" << endl;
    cout << "Hamburguer" << setw(12) << "103" << setw(10) << "10.00" << endl;
    cout << "Cheeseburguer" << setw(10) << "104" << setw(10) << "12.00" << endl;
    cout << "Refrigerante Lata" << setw(7) << "105" << setw(10) << "5.00" << endl;
    cout << "Água" << setw(20) << "106" << setw(10) << "3.00" << endl << endl;

    cout << "Digite o CODIGO do item: " << endl;
    cin >> cod;

    if(cod == 100){
        cout << "Digite a quantidade desse item: " << endl;
        cin >> quant;
        valorFinal = 9.20 * quant;
    }else if(cod == 101){
        cout << "Digite a quantidade desse item: " << endl;
        cin >> quant;
       valorFinal = 12.00 * quant;
    }else if(cod == 102){
        cout << "Digite a quantidade desse item: " << endl;
        cin >> quant;
        valorFinal = 13 * quant;
    }else if(cod == 103){
        cout << "Digite a quantidade desse item: " << endl;
        cin >> quant;
        valorFinal = 10.00 * quant;
    }else if(cod == 104){
        cout << "Digite a quantidade desse item: " << endl;
        cin >> quant;
        valorFinal = 12.00 * quant;
    }else if(cod == 105){
        cout << "Digite a quantidade desse item: " << endl;
        cin >> quant;
        valorFinal = 5.00 * quant;
    }else if(cod == 106){
        cout << "Digite a quantidade desse item: " << endl << endl;
        cin >> quant;
        valorFinal = 3.00 * quant;
    }else{
        cout << "Opção inválida" << endl << endl;
    }
    cout << "O valor a ser pago é " << valorFinal;










    return 0;
}
