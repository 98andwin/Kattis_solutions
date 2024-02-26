#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string text;

    cin >> text;

    for (int i=0; i<text.size()-2; i++){

        if (text[i] == 'C' && text[i+1] == 'O' && text[i+2] == 'V'){
            cout << "Veikur!";
            return 0;
        }
    }
    cout << "Ekki veikur!";
}