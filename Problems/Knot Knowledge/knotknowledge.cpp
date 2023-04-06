#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    int found[1000] = {};
    
    for (int i=0; i<amount; i++){
        int index;
        std::cin >> index;
        
        found[index-1] = 1;
    }
    for (int i=0; i<amount-1; i++){
        int index;
        std::cin >> index;
        
        found[index-1] = 0;
    }
    for (int i=0; i<1000; i++){
        if (found[i]){
            std::cout << i+1;
        }
    }
    
}