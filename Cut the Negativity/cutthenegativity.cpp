#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::vector <std::string> travels = {};
    
    int total = 0;
    for (int i=0; i<amount; i++){
        for (int j=0; j<amount; j++){
            int value;
            std::cin >> value;
            if (value != -1){
                std::string text = std::to_string(i+1) + " " + std::to_string(j+1) + " " + std::to_string(value);
                travels.push_back(text);
                total += 1;
            }
        }
    }
    std::cout << total << '\n';
    for(std::string k : travels){
        std::cout << k << '\n';
    }
}