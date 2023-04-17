#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, y, a, b, c, d;
    
    cin >> x >> y >> a >> b >> c >> d;
    
    if (x >= a && x <= c){
        int res1 = y-b;
        int res2 = y-d;
        
        if (res1 < 0){
            res1 *= -1;
        }
        if (res2 < 0){
            res2 *= -1;
        }
        
        if (res1 < res2){
            cout << res1;
            return 0;
        }
        else{
            cout << res2;
            return 0;
        }
    }
    
    else if (y >= b && y <= d){
        int res1 = x-a;
        int res2 = x-c;
        
        if (res1 < 0){
            res1 *= -1;
        }
        if (res2 < 0){
            res2 *= -1;
        }
        
        if (res1 < res2){
            cout << res1;
            return 0;
        }
        else{
            cout << res2;
            return 0;
        }
    }
    
    double min = sqrt(pow(x-a, 2) + pow(y-b, 2));
    
    double check1 = sqrt(pow(x-c, 2) + pow(y-b, 2));
    if (check1 < min){
         min = check1;
    }
    double check2 = sqrt(pow(x-a, 2) + pow(y-d, 2));
    if (check2 < min){
         min = check2;
    }
    double check3 = sqrt(pow(x-c, 2) + pow(y-d, 2));
    if (check3 < min){
         min = check3;
    }
    
    cout << min;
    return 0;
}