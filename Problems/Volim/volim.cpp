#include <iostream>

int main(){
    int current, amount;
    const int size = 8;
    std::cin >> current >> amount;
    int count = 210;
    
    for (int i=0; i<amount; i++){
        int value;
        char ans;
        std::cin >> value >> ans;
        
        count -= value;
        
        if (count <= 0){
            std::cout << current;
            break;
        }
        if (ans == 'T'){
            current += 1;
            
            if (current == size+1){
                current = 1;
            }
        }
    }
}