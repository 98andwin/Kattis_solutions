#include <iostream>
#include <vector>
#include <ios>
#include <string>
#include <map>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map <int, vector <string> > order;
    while (true){
        string num;
        getline(cin, num);
        int amount = stoi(num);
        if (!amount){
            break;
        }

        for (int i=0; i<amount; i++){
            string text;
            getline(cin, text);
            int index;
            int check = *text.begin();
            
            if (check < 91 && check > 64){
                index = check - 65;
            }
            else{
                index = check - 71;
            }
            
            index *= 52;
            check = *(text.begin()+1);

            if (check < 91 && check > 64){
                index += check - 65;
            }
            else{
                index += check - 71;
            }

            order[index].push_back(text);
        }
        
        for (map <int, vector <string> > ::const_iterator it=order.cbegin(); it!=order.cend(); it++){
            for (int j=0; j<(it->second).size(); j++){
                    cout << (it->second)[j] << '\n';
                }
        }

        cout << '\n';
        order.clear();
    }
}