#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    int sum = 0;
    
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        
        sum += value;
    }
    std::cout << sum;
}