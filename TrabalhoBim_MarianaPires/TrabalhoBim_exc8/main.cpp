#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   int num, mult;
   string opc;

   do{
        cout << "Exc8 - Você deseja imprimir uma tabuada?" << endl;
        cout << "Digite: (S - para SIM) ou (N - para NÃO):";
        cin >> opc;
        cout << "\n";

        if(opc == "S"){
            cout << "Informe um número para que seja apresentada a Tabuada: ";
            cin >> num;
            cout << "\n\n\n";

            if(num >=1 && num <= 9){
                cout << "Tabuada do " << num << endl;
                cout << "***************" << endl;
                for (int i = 1; i <= 10; i++){
                    mult = i * num;
                    cout << i << " X " << num << " = " << mult << endl;
                }
                cout << "***************" << endl;
            }else{
            cout << "Número Inválido" << endl;
            }
        }
    }while(opc == "S");

    return 0;
}
