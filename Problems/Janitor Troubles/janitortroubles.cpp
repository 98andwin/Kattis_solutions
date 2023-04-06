#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a;
    double b;
    double c;
    double d;
    
    cin >> a >> b >> c >> d;
    
    double s = (a+b+c+d)/2;
    
    double res = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout.precision(9);
    cout << res;
    
}