#include <iostream>
using namespace std;
void Increment(int &r)
{
    r++;
}
int main()
{
    int a = 2;
    Increment(a);
    cout << a << endl;

    return 0;
}