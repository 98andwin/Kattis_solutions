#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    for (int i=0; i<amount; i++){
        int values;
        std::cin >> values;
        
        int min;
        int max;
        int value;
        std::cin >> value;
        min = value;
        max = value;
        for (int j=1; j<values; j++){
            std::cin >> value;
            if (value > max){
                max = value;
            }
            
            if (value < min){
                min = value;
            }
        }
        
        std::cout << (max-min)*2 << '\n';
    }
}