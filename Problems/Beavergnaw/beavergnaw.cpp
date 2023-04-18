#include <iostream>
#include <math.h>
using namespace std;

int main(){
    const double pi = 3.14159265358979;
    while (true){
        double d, v;
        cin >> d >> v;
        if (d == 0 && v == 0){
            break;
        }
        
        double left = pow(d, 3.0);
        double right = 6.0*v/pi;
        cout.precision(15);
        cout << pow(left-right, 1.0/3.0) << '\n';
    }
}