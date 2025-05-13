#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int result, modulo;
    cout << "Números divisíveis por 10: " << endl;
    while (i <= 100){
        modulo = i % 10;
        if (modulo == 0){
            result = i;
            cout << result << endl;
        }
        i++;
    }
    return 0;
}
