#include <iostream>
#include <ios>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int longest = 0;
    vector<int> lengths;

    //get all lengths
    while((int)cin.peek() != -1){ //check if end
        string text;
        getline(cin, text);
        
        lengths.push_back(text.size());
        if (text.size() > longest){
            longest = text.size();
        }
    }

    //calulcate sum
    int res = 0;
    for (vector<int>::const_iterator it = lengths.cbegin(); it != lengths.cend()-1; it++){
        int diff = longest-(*it);
        diff *= diff;
        res += diff;
    }
    cout << res;
}