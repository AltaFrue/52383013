#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int j = 0;

    while(1){
        j = 0;
        while(j <= i){
            if(j == 3){
                break;
            }

            j++;
        }

        if(i == 5){
            break;
        }

        i++;
    }

    cout << i * j << endl;
}