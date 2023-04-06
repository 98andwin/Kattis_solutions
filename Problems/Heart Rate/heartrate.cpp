#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        int b;
        double p;
        
        cin >> b >> p;
        
        cout.precision(7);
        
        cout << 60*(b-1)/p << ' ' << 60*(b)/p << ' ' << 60*(b+1)/p << '\n';
    }
    
}