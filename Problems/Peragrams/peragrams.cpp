#include <iostream>
#include <ios>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string text;
    cin >> text;

    vector<int> count (26, 0);

    bool same = true;
    for (string::const_iterator it = text.cbegin(); it != text.cend(); it++){
        int index = *it; //ascii

        if (it != text.cbegin() && count[index-97] == 0){ //check if there are different letters
            same = false;
        }

        count[index-97] += 1;
    }

    //if all letter are the same, it's automatically a palindrome/peragram
    if (same){
        cout << 0;
        return 0;
    }

    int odds = 0;
    for (vector<int>::const_iterator it = count.cbegin(); it != count.cend(); it++){
        if ((*it % 2) == 1){
            odds += 1;
        }
    }

    //One odd is required, rest have to be even
    int res = odds - 1;

    if (res < 0){ //Special case, if all are even it's a palindrome
        res = 0;
    }

    cout << res;
    return 0;
}