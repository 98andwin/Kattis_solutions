#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x1, y1, a1, b1, x2, y2, a2, b2;
    
    cin >> x1 >> y1 >> a1 >> b1 >> x2 >> y2 >> a2 >> b2;
    
    double first_dis = sqrt(pow(x1-a1, 2) + pow(y1-b1, 2));
    double second_dis = sqrt(pow(x2-a2, 2) + pow(y2-b2, 2));
    
    cout.precision(10);
    if (first_dis >= second_dis){
        cout << first_dis;
    }
    else{
        cout << second_dis;
    }
}