#include <iostream>
using namespace std;
void Set(char *p)
{
    *p = 'C';
    *(p + 1) = '+';
    *(p + 2) = '+';
    *(p + 3) = '\0';
}
int main()
{
    int a = 0;
    char *s = (char *)&a;

    Set(s);
    cout << (char *)&a << endl;

    return 0;
} 