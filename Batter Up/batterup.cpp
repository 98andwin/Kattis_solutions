#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    double sum = 0;
    int counter = 0;
    for (int i=0; i<amount; i++){
        double value;
        std::cin >> value;
        
        if (value == -1){
            counter += 1;
        }
        else{
            sum += value;
        }
    }
    std::cout.precision(7);
    std::cout << sum / (amount-counter);
}