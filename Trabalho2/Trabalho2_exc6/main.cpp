#include <iostream>

using namespace std;

int main()
{
    float raio, area;

    cout << "Digite o raio em cm: " << endl;
    cin >> raio;
    area = (raio * raio) * 3.14;

    cout << "A �rea do c�rculo � " << area << " cm quadrados";
    return 0;
}
