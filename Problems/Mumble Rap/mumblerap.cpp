#include <iostream>
#include <ios>
#include <stdio.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int amount;
    cin >> amount;

    int largest = 0;
    int current = 0;
    bool number = false;

    getchar(); // get rid of newline

    for (int i=0; i<amount; i++){
        int letter = getchar();
        if (letter - 48 < 10 && letter - 48 >= 0){ // if letter is a digit
            number = true;
            int value = letter - 48;
            current *= 10;
            current += value;
        }
        else if (number){ // if it's not a digit and the end of the integer
            if (current > largest){
                largest = current;
            }
            current = 0;
            number = false;
        }
    }
    if (number){ // if at the end of the string and the last is an integer
        if (current > largest){
            largest = current;
        }
    }
    cout << largest;
}