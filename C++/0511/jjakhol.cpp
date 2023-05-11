#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "정수를 입력하세요." << endl;
    cin >> a;

    if(a % 2){
        cout << "홀수" << endl;
    }
    else{
        cout << "짝수" << endl;
    }
}