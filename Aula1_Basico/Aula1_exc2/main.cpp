#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int salario=1000;
    int comissao = 5;
    int totalVenda, salarioFinal;

    cout << "Digite o valor total das vendas no m�s: ";
    cin >> totalVenda;
    salarioFinal = salario + ((totalVenda * comissao)/100);
    cout << "Valor do sal�rio final �: " << salarioFinal << "Reais";

    return 0;
}
