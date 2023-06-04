#include <iostream>
using namespace std;

void main()
{
    char* pC = NULL;
    int* pI = NULL;
    double* pD = NULL;

    cout << (void*)(pC + 2) << endl; // 0x2
    cout << (void*)(pI + 2) << endl; // 0x8
    cout << (void*)(pD + 2) << endl; // 0x10
}