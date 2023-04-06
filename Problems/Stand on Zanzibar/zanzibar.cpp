#include <iostream>

int main(){
    int amount;
    
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int sum = 0;
        int previous;
        std::cin >> previous;
        while (true){
            int number;
            std::cin >> number;
            if (number == 0){
                break;
            }
            
            if (number - 2*previous > 0){
                sum += number - 2*previous;
            }
            previous = number;
        }
        std::cout << sum << '\n';
    }
}