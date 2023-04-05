#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const double pi = 3.1415926535;
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        double r, n;
        cin >> r >> n;
        
        double l = 0;
        double first_x;
        double first_y;
        
        cin >> first_x >> first_y;
        
        double prev_x = first_x;
        double prev_y = first_y;
        
        for (int j=1; j<n; j++){
            double value_x, value_y;
            cin >> value_x >> value_y;
            l += sqrt(pow(prev_x-value_x, 2.0) + pow(prev_y-value_y, 2.0));
            prev_x = value_x;
            prev_y = value_y;
        }
        
        l += sqrt(pow(prev_x-first_x, 2.0) + pow(prev_y-first_y, 2.0));
        if (l <= 2*pi*r){
            cout << "Not possible\n";
        }
        else{
            cout << (l-2.0*pi*r)/l << '\n';
        }
    }
}