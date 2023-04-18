#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int amount;
    const double pi = 3.141592653589793238;
    cin >> amount;
    cout.precision(15);
    
    for (int i=0; i<amount; i++){
        double n;
        double l;
        double d;
        double g;
        
        cin >> n >> l >> d >> g;
        
        double area = 0;
        //calc base area
        double apo = l/(2*tan(pi/n));
        area = apo*n*l/2;
        
        
        //calc expansion
        //sides
        area += n*l*d*g;
        
        
        //corners
        area += d*d*g*g*pi;
        
        
        cout << area << '\n';
    }
}