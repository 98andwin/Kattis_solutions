#include <iostream>
#include <ios>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;
    vector<vector<int>> words (0);
    for (int i=0; i<amount; i++){
        string text;
        cin >> text;

        for (int j=0; j<text.size(); j++){
            if (j >= words.size()){
                vector<int> temp;
                temp.push_back((int)text[j]);
                words.push_back(temp);
            }
            else{
                words[j].push_back((int)text[j]);
            }
        }
    }

    string res = "";
    for (int i=0; i<words.size(); i++){
        int sum = 0;
        for (int j=0; j<words[i].size(); j++){
            sum += words[i][j];
        }
        sum = floor(sum/words[i].size());
        res.push_back((char)sum);
    }
    cout << res;
}