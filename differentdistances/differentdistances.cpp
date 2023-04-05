#include <iostream>
#include <math.h>
#include <ios>
using namespace std;
 
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout.precision(10);
    while (true){
        double x1, x2, y1, y2, power;
        cin >> x1;
        if (x1 == 0){
            break;
        }
        cin >> y1 >> x2 >> y2 >> power;
        double xdiff = x1-x2;
        if (xdiff < 0){
            xdiff *= -1;
        }
        double ydiff = y1-y2;
        if (ydiff < 0){
            ydiff *= -1;
        }
        
        cout << pow((pow(xdiff, power) + pow(ydiff, power)), 1.0/power) << '\n';
    }
}