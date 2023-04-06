#include <iostream>

int main(){
    double cost;
    int amount;
    std::cin >> cost >> amount;
    double sum = 0;
    
    for (int i=0; i<amount; i++){
        double w;
        double h;
        
        std::cin >> w >> h;
        
        sum += w * h;
    }
    
    
    std::cout.precision(10);
        
    std::cout << sum*cost;
}