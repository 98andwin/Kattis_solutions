#include <iostream>

int main(){
    int number;
    int secret;
    int amount;
    
    std::cin >> number >> secret >> amount;
    
    for (int i=0; i < amount; i++){
        int k;
        std::cin >> k;
        bool check = false;
        for (int j=0; j < k; j++){
            int value;
            std::cin >> value;
            if (value == secret){
                std::cout << "KEEP\n";
                check = true;
            }
            
        }
        if (!check){
            std::cout << "REMOVE\n";
        }
    }
}