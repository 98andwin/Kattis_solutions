#include <iostream>
#include <ios>
#include <set>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    while (true){
        string domain;
        cin >> domain; // Get rid of "domain"

        if ((int)cin.peek() == -1){
            break;
        }

        set<string> dom;
        while (true){
            string text;
            cin >> text;
            if (text == "codomain"){
                break;
            }
            dom.insert(text);
        }

        map<string, int> codom;
        string text = "";
        while (true){
            char letter;
            cin >> ws;
            cin >> letter;
            
            text += letter;

            char check = cin.peek();

            if (check == '\n'){
                codom.insert({text, 0});
                break;
            }

            if (check == ' '){
                codom.insert({text, 0});
                text = "";
            }
        }
        
        int amount;

        cin >> amount;

        bool function = true;

        for (int i=0; i<amount; i++){
            string first, trash, second;
            cin >> first >> trash >> second;

            set<string>::iterator it = dom.find(first);
            if (it == dom.end()){ // The element doesn't exist or has already been used once
                function = false;
            }
            else{
                dom.erase(it);
            }
            codom[second]++;
        }

        if (!function){
            cout << "not a function\n";
            continue;
        }

        bool sur = true;
        bool inj = true;
        for (map<string, int>::const_iterator it = codom.cbegin(); it != codom.cend(); it++){
            if ((it -> second) == 0){
                sur = false; // Surjective means every element in codomain is mapped
            }
            else if ((it -> second) > 1){
                inj = false; // Injective have every element in codomain mapped once or none
            }
        }

        if (sur && inj){
            cout << "bijective\n";
        }
        else if (sur){
            cout << "surjective\n";
        }
        else if (inj){
            cout << "injective\n";
        }
        else{
            cout << "neither injective nor surjective\n";
        }
    }
}