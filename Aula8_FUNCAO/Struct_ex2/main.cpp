#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    fflush(stdin);
    int NPRODUTOS;


    cout << "Informe a quantidade de produtos: ";
    cin >> NPRODUTOS;

    struct EstruturaProdutos{
        char nomeProd[40];
        int cod;
        float preco;
        char dataVencimento[10];
        char fornecedor[100];
        char marca[40];

    } strProdutos[NPRODUTOS];

    int i;

    for(i=0; i<NPRODUTOS;i++){
        fflush(stdin);
        cout << "\nCadastre o Produto " << i+1 << "!!" << endl;
        cout << "\nInforme o nome do produto: " << endl;
        cin.getline(strProdutos[i].nomeProd, 40);
        fflush(stdin);
        cout << "Informe o codigo do produto: " << endl;
        cin >> strProdutos[i].cod;
        fflush(stdin);
        cout << "Informe o preco: " << endl;
        fflush(stdin);
        cin >> strProdutos[i].preco;
        cout << "Informe a data de vencimento do produto: " << endl;
        fflush(stdin);
        cin.getline(strProdutos[i].dataVencimento, 10);
        //cin.ignore();
        cout << "Informe o nome do fornecedor do produto: " << endl;
        fflush(stdin);
        cin.getline(strProdutos[i].fornecedor, 100);
        //cin.ignore();
        cout << "Informe a marca do produto: " << endl;
        fflush(stdin);
        cin.getline(strProdutos[i].marca, 40);
        //cin.ignore();
        cout << endl;
        fflush(stdin);
        //cin.ignore();
    }

    cout << "Produtos Cadastrados" << endl << endl;

    for(i=0; i<NPRODUTOS; i++){
        cout << "Nome: " << strProdutos[i].nomeProd << endl;
        cout << "Codigo: " << strProdutos[i].cod << endl;
        cout << "Preco: " << strProdutos[i].preco << endl;
        cout << "Data de Vencimento: " << strProdutos[i].dataVencimento << endl;
        cout << "Fornecedor: " << strProdutos[i].fornecedor << endl;
        cout << "Marca: " << strProdutos[i].marca << endl << endl << endl;
    }
    return 0;
}
