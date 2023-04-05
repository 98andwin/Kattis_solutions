#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    double const pi = 3.1415926535;
    while (true){
        double x, y, r;
        cin >> r >> x >> y;
        int c = cin.peek();
        if (c == EOF){
            return 0;
        }
        double len = sqrt(pow(x, 2.0) + pow(y, 2.0));
        if (len > r){
            cout << "miss\n";
            continue;
        }
        len = len / r;
        double theta = pi/2-asin(len);
        theta *= 2;
        double area = pow(r, 2.0)/2.0*(theta-sin(theta));
        
        double circle = pi * r * r;
        cout << circle - area << ' ' << area << '\n';
    }
}