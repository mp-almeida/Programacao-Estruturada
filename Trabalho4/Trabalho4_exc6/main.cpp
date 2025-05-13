#include <iostream>

using namespace std;

int main()
{
    int num = 100;
    int soma = 0;
    while(num <= 200){

       if(num % 2 == 0){
            soma += num;
       }
       num++;
    }
     cout << "Soma dos numeros pares: " << soma;
    return 0;
}
