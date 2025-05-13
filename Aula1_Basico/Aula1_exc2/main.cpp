#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int salario=1000;
    int comissao = 5;
    int totalVenda, salarioFinal;

    cout << "Digite o valor total das vendas no mês: ";
    cin >> totalVenda;
    salarioFinal = salario + ((totalVenda * comissao)/100);
    cout << "Valor do salário final é: " << salarioFinal << "Reais";

    return 0;
}
