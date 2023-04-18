#include <iostream>

int main(){
    int amount, target;
    std::cin >> amount >> target;
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        if (value <= target){
            std::cout << "It hadn't snowed this early in " << i << " years!";
            return 0;
        }
    }
    std::cout << "It had never snowed this early!";
}