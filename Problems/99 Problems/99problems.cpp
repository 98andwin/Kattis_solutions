#include <iostream>

int main(){
    int value;
    std::cin >> value;
    int remainder = (value+1) % 100;
    
    if (value <= 99){
        std::cout << 99;
        return 0;
    }
    
    if (remainder < 50){
        std::cout << value - remainder;
    }
    else{
        std::cout << value + 100 - remainder;
    }
    return 0;
}