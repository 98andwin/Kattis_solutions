#include <iostream>


int main(){
    int amount;
    
    std::cin >> amount;
    
    for (int i=0; i < amount; i++){
        int size;
        std::cin >> size;
        int res = 0;
        for (int j=0; j < size; j++){
            int value;
            std::cin >> value;
            res += value;
        }
        
        std::cout << res - (size - 1) << '\n';
    }
    
}