#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int seats, amount;
    cin >> seats >> amount;
    
    int sum = 0;
    for (int i=0; i<amount; i++){
        int value;
        cin >> value;
        
        sum += value;
        if (sum > seats){
            cout << amount-i;
            return 0;
        }
    }
}