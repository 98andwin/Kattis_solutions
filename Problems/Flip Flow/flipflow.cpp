#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int t, s, amount;

    cin >> t >> s >> amount;

    int sum = 0;    // Amount of sand in the upper half
    int count = 0;  // Keep track on time

    for (int i=0; i<amount; i++){
        int value;
        cin >> value;

        if (i == 0){
            sum = s;
        }
        else{
            sum -= value-count;
            if (sum < 0){   // If we have drained all the sand
                sum = 0;
            }
            sum = s-sum;
        }
        count = value;
    }

    int diff = t-count;
    sum -= diff;
    if (sum < 0){
        sum = 0;
    }

    cout << sum;
}