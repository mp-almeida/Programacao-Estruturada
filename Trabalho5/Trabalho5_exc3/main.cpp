#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float raio, area, perimetro;
    float pi = 3.14;
    cout << "Digite o raio: " << endl;
    cin >> raio;
    area = pi * pow(raio, 2);
    perimetro = 2 * pi * raio;

    cout << "Area do círculo: " << area << endl;
    cout << "Perímetro do círculo: " << perimetro;
    return 0;
}
