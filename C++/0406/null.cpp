#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[8];
    memset(str, 'A', sizeof(str));
    str[0] = 'C';
    str[1] = '+';
    str[2] = '+';
    //str[3] = '\0';

    cout << str << endl;
}