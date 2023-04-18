#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true){
        int amount;
        cin >> amount;
        if (amount == 0){
            break;
        }
        
        vector <int> first (amount);
        vector <int> order (amount);
        int value;
        cin >> value;
        first[0] = value;
        order[0] = 0;
        
        for (int i=1; i<amount; i++){
            cin >> value;
            int num = 0;
            for(int j=0; j<i; j++){
                if (value > first[j]){
                    num += 1;
                }
                else{
                    order[j] += 1;
                }
            }
            order[i] = num;
            first[i] = value;
        }
        
        vector <int> second (amount);
        vector <int> s_order (amount);
        
        cin >> value;
        second[0] = value;
        s_order[0] = 0;
        
        for (int i=1; i<amount; i++){
            cin >> value;
            int num = 0;
            for(int j=0; j<i; j++){
                if (value > second[j]){
                    num += 1;
                }
                else{
                    s_order[j] += 1;
                }
            }
            s_order[i] = num;
            second[i] = value;
        }
        
        for(int k: order){
            for(int i=0; i<s_order.size(); i++){
                if(k == s_order[i]){
                    cout << second[i] << '\n';
                    break;
                }
            }
        }
        cout << '\n';
        
    }
}