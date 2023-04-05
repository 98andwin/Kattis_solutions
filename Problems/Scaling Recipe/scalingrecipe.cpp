#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    
    for (int i=0; i<n; i++){
        double value;
        cin >> value;
        double quot = value/x;
        
        cout << quot*y << '\n';
    }
}