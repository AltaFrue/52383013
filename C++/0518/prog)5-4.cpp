#include <iostream>
using namespace std;
void *MyMemset(void *dest, int c, size_t count)
{
    char *pc = (char *)dest;
    for (int i = 0; i < (int)count; i++)
    {
        *(pc + i) = c;
    }

    return 0;
}
int main()
{
    int a;
    MyMemset(&a, -1, 4);
    cout << a << endl;

    return 0;
}