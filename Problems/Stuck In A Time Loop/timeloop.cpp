#include <iostream>


int main(){
    int amount;
    
    std::cin >> amount;
    
    int count = 1;
    for (int i=0; i < amount; i++){
        
        std::cout << count << " Abracadabra" << '\n';
        count += 1;
    }
    
}