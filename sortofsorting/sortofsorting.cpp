#include <iostream>
#include <vector>
#include <ios>
#include <string>
#include <set>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <vector <string> > buckets;
    set <int> order;
    while (true){
        buckets = vector <vector <string> > (52*52, vector <string> ());
        string num;
        getline(cin, num);
        int amount = stoi(num);
        if (!amount){
            break;
        }
        int min=2705;
        int max=0;
        for (int i=0; i<amount; i++){
            string text;
            getline(cin, text);
            int index;
            int check = text[0];
            //cout << "Check is: " << check << ' ';
            if (check < 91 && check > 64){
                index = check - 65;
            }
            else{
                index = check - 71;
            }
            //cout << "First letter has index: " << index;
            index *= 52;
            check = text[1];

            if (check < 91 && check > 64){
                //cout << text << "second letter has index: " << check-65 << ' ';
                index += check - 65;
            }
            else{
                //cout << text << "second letter has index: " << check-71 << ' ';
                index += check - 71;
            }

            //cout << text << " has total index: " << index << '\n';
            buckets[index].push_back(text);

            if (min == 2705 && max == 0){
                order.insert(order.begin(), index);
                min = index;
                max = index;
            }
            else if (index < min){
                order.insert(order.begin(), index);
                min = index;
            }
            else if (index > max){
                order.insert(--order.end(), index);
                max = index;
            }
            else{
                order.insert(index);
            }
        }
        
        for (set <int> ::iterator it=order.begin(); it!=order.end(); it++){
            for (int j=0; j<buckets[*it].size(); j++){
                    cout << buckets[*it][j] << '\n';
                }
        }

        
        cout << '\n';
        order.clear();
    }
}