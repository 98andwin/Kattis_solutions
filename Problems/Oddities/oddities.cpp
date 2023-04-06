#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        
        if (value%2 == 0){
            std::cout << value << " is even\n";
        }
        else{
            std::cout << value << " is odd\n";
        }
    }
}