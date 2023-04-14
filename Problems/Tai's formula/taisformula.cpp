#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int amount;
    cin >> amount;
    
    double first;
    double value_1;
    double second;
    double value_2;
    
    cin >> value_1 >> first;
    
    double sum = 0;
    for (int i=1; i<amount; i++){
        cin >> value_2 >> second;
        sum += (first+second)/2 * (value_2-value_1);
        value_1 = value_2;
        first = second;
    }
    cout.precision(10);
    cout << sum/1000;
}