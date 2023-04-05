#include <iostream>
#include <ios>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        int n;
        cin >> n;
        double sum = 0;
        double x_base, y_base, x_prev, y_prev;
        cin >> x_base >> y_base >> x_prev >> y_prev;
        for (int j=0; j<n-2; j++){
            double x_curr, y_curr;
            cin >> x_curr >> y_curr;

            double tri_area = abs((x_base-x_curr)*(y_prev-y_base)-(x_base-x_prev)*(y_curr-y_base))/2.0;
            sum += tri_area;
            x_prev = x_curr;
            y_prev = y_curr;
        }
        cout << sum << '\n';
    }
}