#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int amount;
    cin >> amount;
    
    for (int i=0; i<amount; i++){
        string text;
        cin >> text;
        
        int length = sqrt(text.size());
        vector <vector<char>> map (length, vector <char> (length, ' '));
        
        for (int j=0; j<length; j++){
            for (int k=0; k<length; k++){
                map[j][k] = text[j*length+k];
            }
        }
        
        for (int j=length-1; j>=0; j--){
            for (int k=0; k<length; k++){
                cout << map[k][j];
            }
        }
        cout << '\n';
        
    }
}