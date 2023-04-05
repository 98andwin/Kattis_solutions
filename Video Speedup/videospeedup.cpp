#include <iostream>
using namespace std;

int main(){
    int n, p, k;
    
    cin >> n >> p >> k;
    
    double sum = 0;
    double prev = 0;
    for (int i=0; i<n; i++){
        double value;
        cin >> value;
        sum += (value-prev) * (100.0+i*p)/100.0;
        prev = value;
    }
    
    sum += (k-prev) * (100.0+n*p)/100.0;
    
    cout.precision(10);
    cout << sum;
}