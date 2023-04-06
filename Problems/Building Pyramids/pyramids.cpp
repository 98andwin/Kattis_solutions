#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int blocks;
    
    cin >> blocks;
    int counter = 1;
    while (true){
        int square = pow(2*counter-1, 2);
        
        blocks -= square;
        
        if (blocks < 0){
            cout << counter-1;
            break;
        }
        counter += 1;
    }
}