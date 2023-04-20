#include <iostream>
using namespace std;

int main(){
    int a, b;

    a = 1;
    cout << ++a << endl;

    a = 1;
    b = ++a;
    cout << a++ << endl;

    a = 1;
    cout << a++ << endl;

    a = 1;
    b = a++;
    cout << b << endl;

    a = 1;
    ++a;
    cout << a <<endl;

    a = 1;
    a++;
    cout << a << endl;
}