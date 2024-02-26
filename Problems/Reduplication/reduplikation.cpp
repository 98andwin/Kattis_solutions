#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string text;
    int n;
    cin >> text >> n;

    for (int i=0; i<n; i++){
        cout << text;
    }
}