#include <iostream>
using namespace std;

int main(){
    int e, f, c;
    cin >> e >> f >> c;
    
    e += f;
    int sum = 0;
    while (e >= c){
        int rem = e%c;
        sum += (e-rem)/c;
        e = e/c + rem;
    }
    cout << sum;
}