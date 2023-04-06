#include <iostream>

int main(){
    int min;
    int max;
    int target;
    
    std::cin >> min >> max >> target;
    
    for (int i=min; i<=max; i++){
        int sum = 0;
        std::string check = std::to_string(i);
        for (int j=0; j<check.size(); j++){
            sum += (int)check[j] - 48;
        }
        if (sum == target){
            std::cout << i << '\n';
            break;
        }
    }
    
    for (int i=max; i>=min; i--){
        int sum = 0;
        std::string check = std::to_string(i);
        for (int j=0; j<check.size(); j++){
            sum += (int)check[j] - 48;
        }
        if (sum == target){
            std::cout << i;
            break;
        }
    }

}