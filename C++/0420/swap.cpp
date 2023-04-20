#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 7;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;

    float c = 3.7;
    float d = 7.3;

    *(int*)&c = *(int*)&c ^ *(int*)&d;
    *(int*)&d = *(int*)&c ^ *(int*)&d;
    *(int*)&c = *(int*)&c ^ *(int*)&d;
    cout << c << " " << d << endl;
}