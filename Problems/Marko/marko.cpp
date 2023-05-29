#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include <map>
using namespace std;

map<char,int> t9map = {{'a', 2}, {'b', 2}, {'c', 2}, {'d', 3}, {'e', 3}, {'f', 3}, {'g', 4}, {'h', 4}, {'i', 4}, {'j', 5}, {'k', 5}, {'l', 5}, {'m', 6}, {'n', 6}, {'o', 6}, {'p', 7}, {'q', 7}, {'r', 7}, {'s', 7}, {'t', 8}, {'u', 8}, {'v', 8}, {'w', 9}, {'x', 9}, {'y', 9}, {'z', 9}};

string convert_to_t9(string text){
    string res = "";

    for (string::const_iterator it = text.cbegin(); it != text.cend(); it++){
        char l = t9map[*it]+48;
        res += l;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int amount;
    cin >> amount;

    vector<string> words;

    for (int i=0; i<amount; i++){
        string text;
        cin >> text;
        string converted = convert_to_t9(text);
        words.push_back(converted);
    }

    string code;
    cin >> code;

    int res = 0;

    for (int i=0; i<amount; i++){
        if (code == words[i]){
            res += 1;
        }
    }
    cout << res;
}