#include <iostream>

using namespace std;

int main()
{
    float lado, area, dobro;

    cout << "Digite o lado do quadrado: " << endl;
    cin >> lado;
    area = lado*lado;
    cout << "A �rea do quadrado �" << area << endl;
    dobro = area * 2;
    cout << "O dobro desta �rea � " << dobro;

    return 0;
}
