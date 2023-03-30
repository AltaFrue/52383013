#include <iostream>
using namespace std;

int main(){
    cout << fixed;
    cout.precision(0);

    float f = 67108864 + 4;
    cout << f << endl;

    int64_t i64 = 67108864 + 4;
    cout << i64 << endl;
}