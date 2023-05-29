#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;

    int debt = 0;
    int sum = 0;
    for (int i=0; i<amount; i++){
        int trans;
        cin >> trans;
        sum += trans;

        if (sum < debt){
            debt = sum;
        }
    }

    cout << -1*debt;
}