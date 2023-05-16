#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string digits;
    cin >> digits;

    int lower = 0;
    for (int i = digits.size()-1; i > 0; i--){
        if (digits[i] > digits[i-1]){
            lower = i;
            break;
        }
    }

    if (lower == 0){
        cout << 0;
        return 0;
    }

    lower--;

    int upper = lower+1;
    char check = digits[lower];
    for (int i = digits.size()-1; i > lower; i--){
        if (digits[i] < digits[upper] && digits[i] > check){
            upper = i;
        }
    }

    char temp = digits[lower];
    digits[lower] = digits[upper];
    digits[upper] = temp;

    string smaller_string = digits.substr(lower+1, digits.size());
    sort(smaller_string.begin(), smaller_string.end());
    
    cout << digits.substr(0, lower+1) + smaller_string;
}