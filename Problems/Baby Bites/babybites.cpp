#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int amount;
    cin >> amount;

    for (int i=0; i<amount; i++){
        string text;
        cin >> text;

        if (text == "mumble"){
            continue;
        }

        if (to_string(i+1) != text){
            cout << "something is fishy";
            return 0;
        }
    }
    cout << "makes sense";
}