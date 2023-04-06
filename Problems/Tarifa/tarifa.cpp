#include <iostream>


int main(){
    int plan;
    int amount;
    std::cin >> plan >> amount;
    
    
    int res = 0;
    for (int i=0; i < amount; i++){
        res += plan;
        int next;
        
        std::cin >> next;
        
        res -= next;
        
    }
    std::cout << res+plan;
}