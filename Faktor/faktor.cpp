#include <iostream>

int main(){
    int amount;
    int sci;
    
    std::cin >> amount >> sci;
    
    std::cout << amount*sci - (amount-1);
}