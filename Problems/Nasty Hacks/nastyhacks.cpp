#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int no;
        int yes;
        int cost;
        std::cin >> no >> yes >> cost;
        int sum = no - yes + cost;
        
        if (sum < 0){
            std::cout << "advertise\n";
        }
        else if (sum > 0){
            std::cout << "do not advertise\n";
        }
        else if (sum == 0){
            std::cout << "does not matter\n";
        }
    }
    
}