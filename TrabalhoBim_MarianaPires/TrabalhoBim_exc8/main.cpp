#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   int num, mult;
   string opc;

   do{
        cout << "Exc8 - Voc� deseja imprimir uma tabuada?" << endl;
        cout << "Digite: (S - para SIM) ou (N - para N�O):";
        cin >> opc;
        cout << "\n";

        if(opc == "S"){
            cout << "Informe um n�mero para que seja apresentada a Tabuada: ";
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
            cout << "N�mero Inv�lido" << endl;
            }
        }
    }while(opc == "S");

    return 0;
}
