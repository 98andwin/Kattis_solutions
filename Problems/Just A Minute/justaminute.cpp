#include <iostream>
#include <ios>
using namespace std;

int main(){
    int amount;
    cin >> amount;
    int t = 0;
    double sum = 0;
    for (int i=0; i<amount; i++){
        int count;
        double value;
        cin >> count >> value;
        sum += value/60;
        t += count;
    }
    if (sum/t <= 1){
        cout << "measurement error";
    }
    else{
        cout.precision(10);
        cout << sum / t;
    }
}