#include <iostream>
#include <locale>
using namespace std;

int acheMaior(int a, int b, int c){

    int maior;

    maior = a;

    if(b > maior){
        maior = b;
    }else{
        maior = c;
    }
    return maior;
}
int main()
{
    int num1, num2, num3, maior1, soma;
    cout << "Digite uma sequência de 3 numeros: " << endl;
    cin >> num1 >> num2 >> num3;

    maior1 = acheMaior(num1, num2, num3);

    int n1, n2, n3, maior2;
    cout << "Digite uma sequência de 3 numeros: " << endl;
    cin >> n1 >> n2 >> n3;

    maior2 = acheMaior(n1, n2, n3);

    soma = maior1 + maior2;

     cout << "A soma dos numeros maiores é: " << soma;

    return 0;
}
