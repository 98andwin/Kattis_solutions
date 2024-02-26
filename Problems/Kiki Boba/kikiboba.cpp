#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string text;
    cin >> text;

    int k = 0;
    int b = 0;
    for (string::iterator it = text.begin(); it != text.end(); it++){
        if (*it == 'b'){
            b++;
        }
        else if(*it == 'k'){
            k++;
        }
    }

    if (k > b){
        cout << "kiki";
    }
    else if (b > k){
        cout << "boba";
    }
    else if (b == k && b != 0){
        cout << "boki";
    }
    else{
        cout << "none";
    }
}