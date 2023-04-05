#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        int value;
        cin >> value;
        vector<int> order;
        int num = value;
        for (int j=0; j<value; j++){
            //place
            order.insert(order.begin(), num);
            vector<int> new_order (order.size());
            //shuffle
            for (int k=0; k<order.size(); k++){
                int in = (k+num) % order.size();
                new_order[in] = order[k];
            }
            order = new_order;
            num--;
        }
        
        for (int k: order){
            cout << k << ' ';
        }
        cout << '\n';
    }
}