#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int number;
        int days;
        
        std::cin >> number >> days;
        
        std::cout << number << ' ' << days*(days+1)/2 + days << '\n';
    }
}