#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int w;
    int amount;
    cin >> w >> amount;
    
    int res = 0;
    
    for (int i=0; i < amount; i++){
        int x, y;
        
        cin >> x >> y;
        res += x*y;
        
    }
    
    cout << res / w;
}