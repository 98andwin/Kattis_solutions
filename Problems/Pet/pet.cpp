#include <iostream>

int main(){
    int best = 0;
    int sum = 0;
    int index;
    
    
    for (int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            int value;
            std::cin >> value;
            sum += value;
        }
        if (sum > best){
            index = i+1;
            best = sum;
        }
        sum = 0;
    }
    std::cout << index << ' ' << best;
}