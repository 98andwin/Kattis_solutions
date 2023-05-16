#include <iostream>
#include <ios>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string text;
    cin >> text;

    int count = text.size();
    for (int i=2; i<(text.size()/2)+1; i++){
        unordered_map<string, int> words;
        string longest;
        int count_words = 1;
        vector<string> seen (i-1, "");
        for (int j=0; j<=text.size()-i; j++){
            string check = text.substr(j, i);

            bool found = false;
            for (int k=0; k<i-1; k++){
                if (check == seen[k]){
                    found = true;
                    break;
                }
            }

            for (int k=0; k<seen.size()-1; k++){
                seen[k] = seen[k+1];
            }

            if (!found){
                seen[seen.size()-1] = check;
            }
            else{
                seen[seen.size()-1] = "";
            }

            if (!found){
                if (words.find(check) != words.end()){
                    (words.find(check)->second)++;
                    if ((words.find(check)->second) > count_words){
                        longest = check;
                        count_words = (words.find(check)->second);
                    }
                }
                else{
                    words.insert({check, 1});
                }
            }
        }
        
        int amount = text.size()-(i-1)*count_words+i;
        if (amount < count){
            count = amount;
        }
    }

    cout << count;
}