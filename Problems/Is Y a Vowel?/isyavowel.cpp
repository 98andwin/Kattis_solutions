#include <iostream>
#include <ios>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    string text;
    cin >> text;

    string check = "aeiou";

    int not_y = 0;
    int with_y = 0;

    for (string::iterator it = text.begin(); it != text.end(); it++){
        for (string::iterator c_it = check.begin(); c_it != check.end(); c_it++){
            if (*it == *c_it){
                not_y++;
                with_y++;
            }
        }
        if (*it == 'y'){
                with_y++;
        }
    }
    cout << not_y << ' ' << with_y;
}