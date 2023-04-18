#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        double value;
        cin >> value;
        
        cout << ceil(value/400) << '\n';
    }
}