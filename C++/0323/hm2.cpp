#include <iostream>
using namespace std;

int main()
{
#ifdef _M_X64
    cout << "�� ���α׷��� x64 ���α׷��Դϴ�." << endl;
#else
    cout << "�� ���α׷��� x86 ���α׷��Դϴ�." << endl;
#endif
}
