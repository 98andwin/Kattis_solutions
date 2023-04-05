#include <iostream>


int main(){
    double amount;
    
    std::cin >> amount;
    
    double first = 100/amount;
    double second = 100/(100-amount);
    
    std::cout << first << '\n' << second;
    
}