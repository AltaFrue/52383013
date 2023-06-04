#include <iostream>
using namespace std;
void Set(int **pp, int i)
{
    **pp = 3;
}
int main()
{
    int a;
    int *p = &a;
    int **pp = &p;

    Set(pp, 3);
    cout << a << endl;

    return 0;
}