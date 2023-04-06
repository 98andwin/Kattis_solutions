#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double h;
    double a;
    const double pi = 3.14159265;
    
    cin >> h >> a;
    
    cout << ceil(h/sin(a*pi/180));
}