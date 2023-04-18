#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long value = 0;
    int sum = 0;
    while (true){
        sum += 1;
        
        if (value == 0){
            cin >> value;
        }
        else{
            double two = log2(value);
            long min = two;
            double diff = two - min;
            if (diff == 0 && diff == 1){
                sum += two;
                break;
            }
            if (value%2 == 0){
                value /= 2;
            }
            else{
                value = 3*value+1;
            }
        }
        if (value == 1){
            break;
        }
    }
    cout << sum;
}