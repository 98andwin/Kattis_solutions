#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <int> order (amount);
    order[0] = 1;
    
    for (int i=1; i<amount; i++){
        int value;
        std::cin >> value;
        
        order[value+1] = i+1;
    }
    
    for (int k: order){
        std::cout << k << ' ';
    }
}