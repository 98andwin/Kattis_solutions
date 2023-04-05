#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long amount;
    cin >> amount;
    long value;
    cin >> value;
    long min = value;

    long sum = min;
    if (amount == 2){
        cin >> value;
        sum += value;
        cout << sum;
        return 0;
    }
    for (int i=1; i<amount; i++){
        cin >> value;
        if (value < min){
            min = value;
        }
        sum += value;
    }

    sum -= min;
    sum = sum + min*(amount-1);

    cout << sum;
}