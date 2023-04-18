#include <iostream>

int main(){
    int amount, limit;
    
    std::cin >> amount >> limit;
    
    int res = 0;
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        if (limit < value){
            std::cout << res;
            return 0;
        }
        limit -= value;
        res += 1;
    }
    std::cout << res;
    return 0;
}