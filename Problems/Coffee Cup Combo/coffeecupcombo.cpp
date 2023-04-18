#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;
    
    int counter = 0;
    int sum = 0;
    for (int i=0; i<amount; i++){
        char num;
        cin >> num;
        if (num == '1'){
            counter = 3;
        }
        if (counter > 0){
            sum++;
        }
        counter--;
    }
    cout << sum;
}