#include <iostream>
#include <vector>

int main(){
    int poles;
    int amount;
    
    std::cin >> poles >> amount;
    
    std::vector <int> rung (amount, 0);
    
    for (int i=0; i<amount; i++){
         int value;
         std::cin >> value;
         rung[i] = value;
    }
    
    int current;
    
    std::vector <int> place (poles, 0);
    for (int i=1; i<=poles; i++){
        current = i;
        for (int k: rung){
            if (k == current){
                current += 1;
            } 
            else if (k+1 == current){
                current -= 1;
            }
        }
        place[current-1] = i;
        
    }
    for (int k: place){
        std::cout << k << '\n';
    }
    
}