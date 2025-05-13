#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    string nomeProd;
    float valorProd, valorFinal, parcela;
    int opc;

    cout << "Qual é o produto?";
    cin >> nomeProd;
    cout << "\n";

    cout << fixed << setprecision(2) << endl;
    cout << "Qual o valor do produto?";
    cin >> valorProd;
    cout << "\n";

    cout << "De acordo com o menu abaixo, informe como deseja pagar: " << endl;
    cout << "1 - pagamento à vista (10% desconto)." << endl;
    cout << "2 - pagamento com 30 dias de prazo (sem desconto)." << endl;
    cout << "3 - pagamento em 10X (Cartão de crédito - sem desconto - sem acréscimo)." << endl;
    cout << "4 - pagamento em 10X (Boleto - 10% acréscimo)." << endl;

    cin >> opc;
    cout << "\n";
    if (opc == 1){
        valorFinal = valorProd * 0.9;
        cout << "O valor do produto com desconto é: " << valorFinal;
    }else if(opc == 2){
        cout << "O valor do produto para pagamento com 30 dias é: " << valorProd;
    }else if(opc == 3){
        parcela = valorProd / 10.0;
        cout << "O valor do produto em 10X no cartão é: " << valorProd << endl;
        cout << "Cada parcela ficará: " << parcela;
    }else if(opc == 4){
        valorFinal = valorProd + (0.1 * valorProd);
        parcela = valorFinal / 10.0;
        cout << "O valor do produto em 10X no boleto é: " << valorFinal << endl;
        cout << "Cada parcela ficará: " << parcela;
    }else{
        cout << "Opção inválida!!!";
    }
    return 0;
}
