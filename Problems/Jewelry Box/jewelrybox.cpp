#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        double x, y;
        
        cin >> x >> y;
        
        double h = (x+y-sqrt(x*x-x*y+y*y))/6;
        cout.precision(10);
        cout << h*(x-2*h)*(y-2*h) << '\n';
    }
}