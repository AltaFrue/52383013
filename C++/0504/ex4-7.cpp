#include <iostream>
using namespace std;

int main(){
    int Sum = 0;

    int i = 1;
    for(; i < 11; ){
        Sum += i;
        i++;
    }

    cout << Sum << endl;
}