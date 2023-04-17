#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;
    
    vector <string> queue = {};
    
    for (int i=0; i<amount; i++){
        string letter;
        cin >> letter;
        queue.push_back(letter);
    }
    
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        string order;
        cin >> order;
        
        if (order == "cut"){
            string search, letter;
            cin >> letter >> search;
            for (int j=0; j<queue.size(); j++){
                if (search == queue[j]){
                    queue.emplace(queue.begin()+j, letter);
                    break;
                }
            }
        }
        else if (order == "leave"){
            string letter;
            cin >> letter;
            for (int j=0; j<queue.size(); j++){
                if (letter == queue[j]){
                    queue.erase(queue.begin()+j);
                    break;
                }
            }
        }
    }
    for (string k: queue){
        cout << k << '\n';
    }
}