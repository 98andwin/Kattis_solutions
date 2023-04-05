#include <iostream>
#include <string>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string text;
    getline(cin, text);
    vector <char> vowel = {'a', 'e', 'i', 'o', 'u'};
    for (int i=0; i<text.size(); i++){
        for (int j=0; j<vowel.size(); j++){
            if (text[i] == vowel[j]){
                i++;
                i++;
            }
        }
        cout << text[i];
    }
}