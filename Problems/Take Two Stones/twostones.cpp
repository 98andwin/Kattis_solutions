#include <iostream>


int main(){
    int amount;
    std::cin >> amount;
    
    
    if ((amount % 2) == 0){
        std::cout << "Bob";
    }
    else{
        std::cout << "Alice";
    }
    
}