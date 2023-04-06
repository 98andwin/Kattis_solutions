#include <iostream>

int main(){
    int amount;
    int sum=0;
    
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        if(value < 0){
            sum += value;
        }
    }
    std::cout << -sum;
}