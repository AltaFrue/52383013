#include <iostream>
using namespace std;

int main(){
    int grade;
    double rank;

    cout << "표준 등급을 입력하세요!" << endl;
    cin >> grade;

    if(grade == 1){
        rank = double(0 + 4)/2;
    }
    else if(grade == 2){
        rank = double(4 + 11)/2;
    }
    else if(grade == 3){
        rank = double(11 + 23)/2;
    }
    else if(grade == 4){
        rank = double(23 + 40)/2;
    }
    else if(grade == 5){
        rank = double(40 + 60)/2;
    }
    else if(grade == 6){
        rank = double(60 + 77)/2;
    }
    else if(grade == 7){
        rank = double(77 + 89)/2;
    }
    else if(grade == 8){
        rank = double(89 + 96)/2;
    }
    else if(grade == 9){
        rank = double(96 + 100)/2;
    }

    cout << "평균 " << rank << "등입니다." << endl;
}