#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int amount;
    cin >> amount;
    const double pi = 3.14159265;
    for (int i=0; i<amount; i++){
        double v0;
        double theta;
        double x;
        double h_lower;
        double h_upper;
        
        cin >> v0 >> theta >> x >> h_lower >> h_upper;
        
        double t = x / (v0 * cos(theta*pi/180));
        
        double y = v0 * sin(theta*pi/180) * t - (9.81 * t * t)/ 2;
        
        if (h_upper-y > 1 && y-h_lower > 1){
            cout << "Safe\n";
        }
        else{
            cout << "Not Safe\n";
        }
    }
}