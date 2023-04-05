#include <iostream>
#include <string>
#include <ios>
using namespace std;

int main(){
    string first;
    string second;
    cin >> first >> second;
    int x, y;
    bool found = false;
    for (int i=0; i<first.size(); i++){
        for (int j=0; j<second.size(); j++){
            if (first[i] == second[j]){
                x = i;
                y = j;
                found = true;
                break;
            }
        }
        if (found){
            break;
        }
    }
    
    for (int i=0; i<second.size(); i++){
        for (int j=0; j<first.size(); j++){
            if (j == x){
                cout << second[i];
            }
            else if (i == y){
                cout << first[j];
            }
            else{
                cout << '.';
            }
        }
        cout << '\n';
    }
}