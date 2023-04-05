#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    
    double sum = xa*(yb-yc) + xb*(yc-ya) + xc*(ya-yb);
    if (sum < 0){
        sum *= -1;
    }
    sum /= 2;

    cout.precision(1);
    cout.setf(ios::fixed, ios::floatfield);
    cout << sum << '\n';
    
    int amount, count = 0;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        int x, y;
        cin >> x >> y;
        double sum1 = x*(yb-yc) + xb*(yc-y) + xc*(y-yb);
        if (sum1 < 0){
            sum1 *= -1;
        }
        sum1 /= 2;
        double sum2 = xa*(y-yc) + x*(yc-ya) + xc*(ya-y);
        if (sum2 < 0){
            sum2 *= -1;
        }
        sum2 /= 2;
        double sum3 = xa*(yb-y) + xb*(y-ya) + x*(ya-yb);
        if (sum3 < 0){
            sum3 *= -1;
        }
        sum3 /= 2;
        
        if (sum1+sum2+sum3 == sum){
            count += 1;
        }
    }
    cout.precision(0);
    cout << count;
}