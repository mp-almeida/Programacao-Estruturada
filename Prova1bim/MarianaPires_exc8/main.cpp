#include <iostream>

using namespace std;

int main()
{
    float salario, aumento, salFinal;
    int percentual;

    cout << "Digite seu salario atual: ";
    cin >> salario;

    if(salario <= 1500){
        percentual = 20;
        aumento = salario * 0.2;
        salFinal = aumento + salario;
    }else if((salario > 1500) && (salario <= 2000)){
        percentual = 15;
        aumento = salario * 0.15;
        salFinal = aumento + salario;
    }else if((salario > 2000) && (salario <= 3000 )){
        percentual = 10;
        aumento = salario * 0.1;
        salFinal = aumento + salario;
    }else{
        percentual = 5;
        aumento = salario * 0.05;
        salFinal = aumento + salario;
    }

    cout << "\nSeu salario antes do reajuste era de R$ " << salario;
    cout << "\nSeu salario foi aumentado em " << percentual << " porcento";
    cout << "\nSeu salario foi aumentado em R$ " << aumento;
    cout << "\nSeu salario atual e de R$ " << salFinal;
    return 0;
}
