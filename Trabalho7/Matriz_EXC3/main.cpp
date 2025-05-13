#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j;

    cout << "Digite o valor das linhas: ";
    cin >> m;
    cout << "Digite o valor das colunas: ";
    cin >> n;

    int matriz1[m][n], matriz2[m][n];
    int soma[m][n];

    cout << "\nVamos preencher a matriz 1" << endl << endl;
     for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout << "Preencha a tabela da posicao [" << i << ", " << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "\nVamos preencher a matriz 2" << endl << endl;

     for(i=0; i < m; i++){
        for(j=0; j < n; j++){
            cout << "Preencha a tabela da posicao [" << i << ", " << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout << "\nMatriz 1" << endl << endl;

    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++){
                cout << matriz1[i][j] << "\t";

        }
        cout << endl;
    }

    cout << "\nMatriz 2" << endl << endl;

    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++){
                cout << matriz2[i][j] << "\t";

        }
        cout << endl;
    }



        //Soma das matrizes
        for(i=0; i < m; i++){
         for(j=0; j < n; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
         }
        }

        //Mostrando Matriz Somada
        cout << "\nMatriz Somada" << endl << endl;
        for(i=0; i < m; i++){
         for(j=0; j < n; j++){
            cout << soma[i][j] << "\t";
         }
         cout << endl;
        }




    return 0;
}

