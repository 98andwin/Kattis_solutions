#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int amount, max = 0, sum = 0, current = 0;

        cin >> amount;

        bool tie = false;
        for (int j=0; j<amount; j++){
            int value;
            cin >> value;

            sum += value;

            if (value > max){
                tie = false;
                max = value;
                current = j+1;
            }
            else if (value == max){
                tie = true;
            }
        }

        if (tie){
            cout << "no winner\n";
        }
        else{
            if (max > (sum/2)){
                cout << "majority winner " << current << '\n';
            }
            else{
                cout << "minority winner " << current << '\n';
            }
        }
    }
}