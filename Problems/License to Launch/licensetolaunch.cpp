#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    int value;
    cin >> amount >> value;
    int min = value;
    int day = 0;
    for (int i=1; i<amount; i++){
        cin >> value;
        if (value < min){
            min = value;
            day = i;
        }
    }
    cout << day;
}