#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amount;
    cin >> amount;
    vector<char> left (17, 'f');
    vector<char> right (17, 'f');

    for (int i=0; i<amount; i++){
        char first, second, state;
        cin >> first >> second >> state;

        
        if (first == '+'){
            int c = second-'0';
            left[8+c] = state;
        }
        else if (first == '-'){
            int c = second-'0';
            left[8-c] = state;
        }

        else if (second == '+'){
            int c = first-'0';
            right[8+c] = state;
        }
        else if (second == '-'){
            int c = first-'0';
            right[8-c] = state;
        }
    }

    bool upper = false;
    bool lower = false;

    for (int i=0; i<8; i++){
        if (left[7-i] == 'b' || left[9+i] == 'b'){
            upper = false;
            break;
        }

        if (left[7-i] == 'f'){
            lower = true;
        }
        
        
        if (left[9+i] == 'f'){
            upper = true;
        }
    }

    if (lower && upper){
        cout << 0;
        return 0;
    }

    lower = false;
    upper = false;
    for (int i=0; i<8; i++){
        if (right[7-i] == 'b' || right[9+i] == 'b'){
            upper = false;
            break;
        }

        if (right[7-i] == 'f'){
            lower = true;
        } 
        
        if (right[9+i] == 'f'){
            upper = true;
        }
    }

    if (upper && lower){
        cout << 1;
        return 0;
    }

    else{
        cout << 2;
        return 0;
    }

}