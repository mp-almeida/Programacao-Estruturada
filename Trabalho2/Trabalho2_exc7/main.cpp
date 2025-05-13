#include <iostream>

using namespace std;

int main()
{
    float lado, area, dobro;

    cout << "Digite o lado do quadrado: " << endl;
    cin >> lado;
    area = lado*lado;
    cout << "A área do quadrado é" << area << endl;
    dobro = area * 2;
    cout << "O dobro desta área é " << dobro;

    return 0;
}
