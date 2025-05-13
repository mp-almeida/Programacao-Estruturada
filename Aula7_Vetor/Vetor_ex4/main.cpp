#include <iostream>

using namespace std;

int main()
{
    float notas[5], media= 0;
    int i;

    for(i=0; i < 5; i++){
        cout << "Digite a nota do aluno " << i+1 << " : " << endl;
        cin >> notas[i];
        media += notas[i];
    }

    cout << "\nMedia dos alunos e de " << (media/5) << endl;
    return 0;
}
