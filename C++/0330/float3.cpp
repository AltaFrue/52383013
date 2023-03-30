#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(0);

    for(int i = 0; i < 9; i++)
    {
        float f = 67108864 + i;
        cout << f << endl;
    }
}