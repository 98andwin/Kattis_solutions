#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    
    vector <int> votes (1000);
    
    for (int i=0; i<amount; i++){
        int value;
        cin >> value;
        votes[value] += 1;
    }
    
    int sum = 0;
    int count = amount;
    int current = 999;
    while (true){
        if (count == 0){
            break;
        }
        if (votes[current] == 0){
            current -= 1;
        }
        else{
            if (count <= (amount/2)+1){
                votes[current] -= 1;
                sum += (current/2);
            }
            else{
                votes[current] -= 1;
                sum += current;
            }
            count--;
        }
    }
    cout << sum;
}