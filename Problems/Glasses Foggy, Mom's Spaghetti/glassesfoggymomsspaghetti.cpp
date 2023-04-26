#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

double distance (double x, double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main(){
    double d, x, y, h;
    cin >> d >> x >> y >> h;

    if (y == 0){
        double dist = d*(h/2)/x;
        cout << dist * 2.0;
    }

    else{
        double k = y/x;
        double angle = atan(k);

        double smaller_x = cos(angle) * d;
        double smaller_y = sin(angle) * d;


        double m = smaller_y+(1/k)*smaller_x;

        double d1_x = m/((y+h/2.0)/x + 1/k);
        double d1_y = -(1/k)*d1_x + m;

        double d2_x = m/((y-h/2.0)/x + 1/k);
        double d2_y = -(1/k)*d2_x + m;
        
        double length = distance(d1_x-d2_x, d1_y-d2_y);

        cout.precision(7);
        cout << fixed;
        cout << length;
    }
}