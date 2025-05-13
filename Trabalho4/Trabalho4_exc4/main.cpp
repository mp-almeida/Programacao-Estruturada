#include <iostream>

using namespace std;

int main()
{
    int num = 50;
    cout << "Numeros contidos entre 50 e 10: " << endl;
    while (num >= 10){
        cout << num << endl;
        num = num - 1;
    }
    return 0;
}
