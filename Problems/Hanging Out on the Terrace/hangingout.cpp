#include <iostream>

int main(){
    int amount;
    int limit;
    
    std::cin >> limit >> amount;
    
    int res = 0;
    int sum = 0;
    
    for (int i=0; i<amount; i++){
        std::string ins;
        int value;
        
        std::cin >> ins >> value;
        
        if (ins == "enter"){
            if (sum + value <= limit){
                sum += value;
            }
            else{
                res += 1;
            }
        }
        
        else if (ins == "leave"){
            sum -= value;
            if (sum < 0){
                sum = 0;
            }
        }
    }
    
    std::cout << res;
}