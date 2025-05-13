#include <iostream>

using namespace std;

int main()
{
    int vetor[15], i=0;

    for(i; i < 15; i++){
        cout << "Digite o valor da posicao " << i << " : " << endl;
        cin >> vetor[i];

        if(vetor[i] % 2 == 0){
            cout << "numero Par" << endl << endl;
        }else{
            cout << "numero Impar" << endl << endl;
        }

    }
    return 0;
}
