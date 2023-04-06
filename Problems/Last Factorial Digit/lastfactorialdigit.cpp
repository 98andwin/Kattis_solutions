#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        if (value == 0){
            std::cout << 1 << '\n';
        }
        else if (value == 1){
            std::cout << 1 << '\n';
        }
        else if (value == 2){
            std::cout << 2 << '\n';
        }
        else if (value == 3){
            std::cout << 6 << '\n';
        }
        else if (value == 4){
            std::cout << 4 << '\n';
        }
        else{
            std::cout << 0 << '\n';
        }
    }
}