#include <iostream>
using namespace std;

double Divide(int a, int b)
{
    return (double)a / b;
}

int main()
{
    auto r = Divide(1, 2);
    cout << r << endl;
}