#include <iostream>
using namespace std;

void main()
{
    int a = 3;
    int* p = &a;

    cout << ( ++*p ) << endl;
}