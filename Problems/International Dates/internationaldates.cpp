#include <iostream>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int first, second;
    char middle;

    cin >> first >> middle >> second;

    if (first > 12){
        cout << "EU";
    }
    else if (second > 12){
        cout << "US";
    }
    else{
        cout << "either";
    }
}