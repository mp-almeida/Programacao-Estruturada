#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salario, somaSal = 0, medSal, medFilho;
    int numFilho, somaFilho = 0;
    int i = 1;
    float maiorSal = 0;

    for(i; i <= 15; i++){
        cout << "Sal�rio: " << endl;
        cin >> salario;
        cout << "N�mero de Filhos: " << endl;
        cin >> numFilho;

        somaSal += salario;
        somaFilho += numFilho;
    // compara��o salario
        if(salario > maiorSal){
            maiorSal = salario;
        }
    }
    medSal = somaSal / 15.0;
    medFilho = somaFilho / 15.0;

    cout << fixed << setprecision(2);
    cout << "M�dia do sal�rio: " << medSal << endl;
    cout << "M�dia do n�mero de filhos: " << medFilho << endl;
    cout << "Maior sal�rio: " << maiorSal << endl;
    return 0;
}
