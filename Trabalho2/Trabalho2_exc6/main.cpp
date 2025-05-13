#include <iostream>

using namespace std;

int main()
{
    float raio, area;

    cout << "Digite o raio em cm: " << endl;
    cin >> raio;
    area = (raio * raio) * 3.14;

    cout << "A área do círculo é " << area << " cm quadrados";
    return 0;
}
