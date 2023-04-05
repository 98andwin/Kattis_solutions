#include <iostream>


int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i < amount; i++){
        std::string text;
        
        std::cin >> text;
        
        if ((i%2) == 0){
            std::cout << text << '\n';
        }
    }
    
}