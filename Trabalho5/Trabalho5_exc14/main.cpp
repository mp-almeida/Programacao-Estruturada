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
        cout << "Salário: " << endl;
        cin >> salario;
        cout << "Número de Filhos: " << endl;
        cin >> numFilho;

        somaSal += salario;
        somaFilho += numFilho;
    // comparação salario
        if(salario > maiorSal){
            maiorSal = salario;
        }
    }
    medSal = somaSal / 15.0;
    medFilho = somaFilho / 15.0;

    cout << fixed << setprecision(2);
    cout << "Média do salário: " << medSal << endl;
    cout << "Média do número de filhos: " << medFilho << endl;
    cout << "Maior salário: " << maiorSal << endl;
    return 0;
}
