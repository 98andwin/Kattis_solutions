#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    if (amount%2 == 1){
        std::cout << "still running";
    }
    else{
        int sum = 0;
        for (int i=0; i<amount/2; i++){
            int first;
            int second;
            std::cin >> first >> second;
            sum += second-first;
        }
        std::cout << sum;
    }
}