#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int amount, value;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        cin >> value;
        long res = pow(2, value)-1;
        cout << res << '\n';
    }
}