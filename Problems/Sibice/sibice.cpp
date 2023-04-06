#include <iostream>


int main(){
    int amount;
    int w;
    int h;
    std::cin >> amount >> w >> h;
    
    
    int l = w * w + h * h;
    
    for (int i=0; i < amount; i++){
        
        int next;
        
        std::cin >> next;
        
        if (next*next <= l){
            std::cout << "DA" << '\n';
        }
        else{
            std::cout << "NE" << '\n';
        }
        
    }
}