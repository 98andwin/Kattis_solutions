#include <iostream>

int main(){
    int amount, value;
    std::cin >> amount;
    int sum = 0;
    for (int i=0; i<amount; i++){
        std::cin >> value;
        sum += value;
    }
    
    if ((sum % 3) == 0){
        std::cout << "yes";
    }
    else{
        std::cout << "no";
    }
}