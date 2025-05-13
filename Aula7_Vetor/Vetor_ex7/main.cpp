#include <iostream>

using namespace std;

int main()
{
    int matriz[2][3];
    int i,j;
    //Preenchimento matriz

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }
    cout << "\n";
    //Mostrar matriz
    for(i=0; i<2; i++){ //linha
        for(j=0; j<3; j++){//coluna
            cout << matriz[i][j] << "\t";//tab
        }
        cout << endl;//skip for the next line of the table
    }


    return 0;
}
