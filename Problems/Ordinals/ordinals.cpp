#include <iostream>
#include <ios>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string res = "{}";
    vector<string> previous;
    previous.push_back(res);

    int amount;
    cin >> amount;

    for (int i=0; i<amount; i++){
        string newstring = "{";
        for (int j=0; j<previous.size(); j++){
            newstring += previous[j];
            if (j != previous.size()-1){
                newstring += ",";
            }
        }
        newstring += "}";
        res = newstring;
        previous.push_back(newstring);
    }

    cout << res;
}