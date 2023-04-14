#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int p;
    int x;
    int y;
    
    cin >> n >> p >> x >> y;
    
    int count = 0;
    int res = 0;
    
    count = floor(p/(n-1));
    res += (count)*y;
    res += p*x;
    
    cout << res;
}