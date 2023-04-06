#include <iostream>

int main(){
    int amount;
    int volume = 7;
    std::cin >> amount;
    std::string trash;
    getline(std::cin, trash);
    for (int i=0; i<amount; i++){
        std::string request;
        getline(std::cin, request);
        
        if (request == "Skru op!" && volume < 10){
            volume += 1;
        }
        
        else if (request == "Skru ned!" && volume > 0){
            volume -= 1;
        }
    }
    std::cout << volume;
}