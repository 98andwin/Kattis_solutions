#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string text;
    getline(cin, text);
    
    char first = text[0];
    cout << first;
    for (string::const_iterator it = text.cbegin(); it != text.cend(); it++){
        
        if (first != *it || *it == ' '){
            first = *it;
            cout << *it;
        }
    }
}