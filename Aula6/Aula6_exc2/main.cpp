#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string nome;

    cout << "Olá vamos conversar?" << endl;
    cout << "Qual seu nome?" << endl;
    getline(cin, nome);
    cout << "Nossa," << nome << ", que nome lindo";
    return 0;
}
