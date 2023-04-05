#include <iostream>
#include <vector>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n;
    cin >> n;
    string k;
    getline(cin, k);
    
    for (int i=0; i<n; i++){
        vector <int> check (26);
        string text;
        getline(cin, text);
        for (int j=0; j<text.size(); j++){
            char letter = text[j];
            int index = letter;
            if (index >= 65 && index <= 90){
                check[index-65] = 1;
            }
            else if (index >= 97 && index <= 122){
                check[index-97] = 1;
            }
        }
        //pangram cout
        string rest = "";
        for (int j=0; j<check.size(); j++){
            if (!check[j]){
                char l = j + 97;
                rest += l;
            }
        }
        if (rest.size() == 0){
            cout << "pangram\n";
        }
        else{
            cout << "missing " << rest << '\n';
        }
    }
}