#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double L, R;
    cin >> L >> R;
    
    if (sqrt(2*pow(L, 2)) < 2*R){
        cout << "fits";
    }
    else{
        cout << "nope";
    }
}