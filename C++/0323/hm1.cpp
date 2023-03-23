#include <iostream>
using namespace std;

int main(){
    cout << "출생 연도를 입력하세요." << endl;
    int year;
    cin >> year;
    int calc = 2002 - year + 1;
    cout << "2002 한일월드컵 당시 한국나이는 " << calc << "세입니다." << endl;
}