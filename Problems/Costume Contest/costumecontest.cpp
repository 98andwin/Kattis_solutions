#include <iostream>
#include <ios>
#include <map>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int amount;
    cin >> amount;

    map<string, int> category;

    for (int i=0; i<amount; i++){
        string text;
        cin >> text;

        map<string, int>::iterator it = category.find(text);

        if (it == category.end()){
            category.insert({text, 1});
        }
        else{
            (it -> second)++;
        }
    }

    int lowest = amount;
    vector<string> output;

    for (map<string, int>::const_iterator it = category.cbegin(); it != category.cend(); it++){
        if (it -> second < lowest){
            output.clear();
            output.push_back(it -> first);
            lowest = it -> second;
        }
        else if (it -> second == lowest){
            output.push_back(it -> first);
        }
    }
    
    for (vector<string>::const_iterator it = output.cbegin(); it != output.cend(); it++){
        cout << *it << '\n';
    }
}