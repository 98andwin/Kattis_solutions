#include <iostream>
#include <string>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    cin >> amount;
    string text;
    cin >> text;
    cout << amount << ' ' << text << '\n';
    bool forward;
    for (int i=1; i<amount; i++){
        string check;
        cin >> check;
        if (i == 1){
            if (check > text){
                forward = false;
            }
            else{
                forward = true;
            }
        }
        else{
            if (forward && check > text){
                cout << "NEITHER";
                return 0;
            }
            else if (!forward && check < text){
                cout << "NEITHER";
                return 0;
            }
        }
        text = check;
    }
    if (forward){
        cout << "DECREASING";
        return 0;
    }
    else{
        cout << "INCREASING";
        return 0;
    }
}