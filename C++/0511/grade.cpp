#include <iostream>
using namespace std;

int main(){
    int grade;
    double rank;

    cout << "수능 성적 상위 비율을 입력하세요!" << endl;
    cin >> rank;

    if(rank <= 4.0){
        grade = 1;
    }
    else if(rank <= 11.0){
        grade = 2;
    }
    else if(rank <= 23.0){
        grade = 3;
    }
    else if(rank <= 40.0){
        grade = 4;
    }
    else if(rank <= 60.0){
        grade = 5;
    }

    else if(rank <= 77.0){
        grade = 6;
    }
    else if(rank <= 89.0){
        grade = 7;
    }
    else if(rank <= 96.0){
        grade = 8;
    }
    else if(rank <= 100.0){
        grade = 9;
    }

    cout << grade << "등급입니다." << endl;
}