#include <iostream>
#include <ios>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <string> words;
    set <string> res;
    
    while (true){
        string word;
        cin >> word;
        if (word == ""){
            break;
        }
        words.push_back(word);
    }

    for (vector<string>::iterator it = words.begin(); it != words.end(); it++){
        for (vector<string>::iterator new_it = words.begin(); new_it != words.end(); new_it++){
            if (*it != *new_it){
                res.insert(*it+*new_it);
            }
        }
    }
    
    for (set<string>::const_iterator it = res.begin(); it != res.end(); it++){
        cout << *it << '\n';
    }
}