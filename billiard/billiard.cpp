#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double const pi = 3.1415926535;
    while (true){
        double a, b, s, m, n;
        cin >> a >> b >> s >> m >> n;
        
        if (a == 0 && b == 0 && s == 0 && m == 0 && n == 0){
            break;
        }
        
        double distance = sqrt(pow(a*m, 2.0) + pow(b*n, 2.0));
        double angle = atan((b*n)/(a*m))*180/pi;
        
        cout.precision(2);
        cout.setf(ios::fixed, ios::floatfield);
        cout << angle << ' ' << distance/s << '\n';
    }
}