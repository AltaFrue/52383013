#include <iostream>
using namespace std;

int main()
{
#ifdef _M_X64
    cout << "이 프로그램은 x64 프로그램입니다." << endl;
#else
    cout << "이 프로그램은 x86 프로그램입니다." << endl;
#endif
}
