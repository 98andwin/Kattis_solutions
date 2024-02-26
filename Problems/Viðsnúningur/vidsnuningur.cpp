#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    std::string text;
    cin >> text;

    for (int i=0; i<text.size(); i++){
        cout << text[text.size()-i-1];
    }
}