#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    int diff_1 = b-a, diff_2 = c-b;

    if (diff_1 == diff_2){
        cout << "cruised";
    }
    else if (diff_1*diff_2 < 0 && diff_1 != 0 && diff_2 != 0){
        cout << "turned";
    }
    else{
        if (diff_1 <= 0 && diff_2 <= 0){
            diff_1 *= -1;
            diff_2 *= -1;
        }
        if (diff_1 > diff_2){
            cout << "braked";
        }
        else{
            cout << "accelerated";
        }
    }
}