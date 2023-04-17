#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string code, key;
    cin >> code >> key;
    
    for (int i=0; i<code.size(); i++){
        int value = code[i] - 65;
        int offset = key[i] - 65;
        
        value = value + offset * (int)pow(-1, i+1);
        if (value < 0){
            value += 26;
        }
        char letter = value%26 + 65;
        cout << letter;
    }
}