#include <iostream>

using namespace std;

int main()
{
    int dist, conv;

    cout << "Digite a distância em metros: " << endl;
    cin >> dist;
    conv = dist * 100;

    cout << "A distância " << dist << " em centímetros é " << conv;
    return 0;
}
