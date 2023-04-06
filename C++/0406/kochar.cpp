#include <iostream>
using namespace std;

int main()
{
    char str[] = "대한민국";
    int length = sizeof(str);
    cout << str << length << endl;

    wchar_t wstr[] = L"대한민국";
    int wlength = sizeof(wstr);
    wcout << str << wlength << endl;
}