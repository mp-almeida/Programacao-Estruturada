#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;

    for(i = 3; i <=100; i+= 3){
            cout << setw(5) << i << endl;
    }
    return 0;
}
