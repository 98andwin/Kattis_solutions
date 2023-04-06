#include <iostream>

int main(){
    while (true){
        int amount;
        std::cin >> amount;
        
        if (amount == -1){
            break;
        }
        
        int sum = 0;
        
        int first = 0;
        int second;
        for (int i=0; i<amount; i++){
            int value;
            std::cin >> value >> second;
            sum += value * (second - first);
            first = second;
        }
        
        std::cout << sum << " miles\n";
    }
}