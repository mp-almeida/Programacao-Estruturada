#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cout << "Digite o valor da matriz: ";
    cin >> m;

    int matriz1[m][m];

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << "Preencha a tabela da posicao [" << i << ", " << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\n";

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i == j){
                cout << matriz1[i][j] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
