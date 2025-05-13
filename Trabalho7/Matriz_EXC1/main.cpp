#include <iostream>

using namespace std;

int main()
{
    int m;

    cout << "Digite um numero p/ ser o tamanho da matriz: ";
    cin >> m;

    int matriz[m][m];

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << "\nDigite valor p/ preencher a matriz [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\n";

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i!=j){
                cout << matriz[i][j] << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}
