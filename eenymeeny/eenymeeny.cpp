#include <iostream>
#include <ios>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string text;
    getline(cin, text);
    
    int count = 1;
    for (int i=0; i<text.size(); i++){
        if (text[i]== ' '){
            count++;
        }
    }
    
    int amount;
    cin >> amount;
    
    vector <string> names (0);
    vector <int> taken (amount);
    
    for (int i=0; i<amount; i++){
        string name;
        cin >> name;
        names.push_back(name);
    }
    
    vector <string> t1 (0);
    vector <string> t2 (0);
    
    int order = 0;
    for (int i=0; i<amount; i++){
        int turn = count;
        while (turn != 0){
            if (!taken[order]){
                turn--;
            }
            if (turn == 0){
                taken[order] = 1;
                if (i%2 == 0){
                    t1.push_back(names[order]);
                }
                else{
                    t2.push_back(names[order]);
                }
            }
            order = (order+1) % amount;
        }
    }
    
    cout << t1.size() << '\n';
    for (string k: t1){
        cout << k << '\n';
    }
    cout << t2.size() << '\n';
    for (string k: t2){
        cout << k << '\n';
    }
}