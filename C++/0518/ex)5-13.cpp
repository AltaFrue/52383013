#include <iostream>
using namespace std;

void main()
{
    int i;
    void* p = &i;
    *(int*)p = 1;
} 