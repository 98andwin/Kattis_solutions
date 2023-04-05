#include <iostream>
#include <math.h>
using namespace std;

int main(){
    const double pi = 3.1415926535;
    cout.precision(10);
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        double x = 0;
        double y = 0;
        double dir = 90;
        
        int n;
        cin >> n;
        
        for (int j=0; j<n; j++){
            double angle, length;
            cin >> angle >> length;
            
            dir += angle;
            if (dir >= 360){
                dir -= 360;
            }
            else if (dir < 0){
                dir += 360;
            }
            
            x += length*cos(dir*pi/180);
            y += length*sin(dir*pi/180);
        }
        cout << x << ' ' << y << '\n';
    }
}