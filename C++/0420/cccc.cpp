#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cout << ~ ! ++a << endl;

    int b = a += 1;
    cout << b << endl;
}