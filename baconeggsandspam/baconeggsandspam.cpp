#include <iostream>
#include <ios>
#include <set>
#include <map>
#include <string>
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
        
        map <string, set<string>> ingredients;
        
        for (int i=0; i<amount; i++){
            string name;
            cin >> name;
            
            while (true){
                string part;
                cin >> part;
                
                map<string, set<string>>::iterator it = ingredients.find(part);
                
                if (it == ingredients.end()){
                    set <string> temp;
                    temp.insert(name);
                    ingredients[part] = temp;
                }
                else{
                    (it -> second).insert(name);
                }
                
                int c = cin.peek();
                if (c == 10){
                    break;
                }
            }
        }
        for (map<string, set<string>>::const_iterator it = ingredients.cbegin(); it != ingredients.cend(); it++){
            cout << (it -> first) << ' ';
            
            for (set<string>::const_iterator new_it = (it -> second).cbegin(); new_it != (it -> second).cend(); new_it++){
                cout << *new_it << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}