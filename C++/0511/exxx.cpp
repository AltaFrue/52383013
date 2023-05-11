#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "받아쓰기 점수를 입력하세요." << endl;
    cin >> a;
    switch (a)
    {
    case 0:
        cout << "F" << endl;
    case 10:
    case 20:
    case 30:
    case 40:
        cout << "D" << endl;
        break;
    case 50:
    case 60:
    case 70:
        cout << "C" << endl;
        break;
    case 80:
    case 90:
        cout << "B" << endl;
        break;
    case 100:
        cout << "A" << endl;
        break;
    default:
        cout << "잘못 입력하셨습니다." << endl;
    }
}