#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    std::string trash;
    getline(std::cin, trash);
    for (int i=0; i<amount; i++){
        std::string text;
        getline(std::cin, text);
        
        if (text.substr(0, 10) == "Simon says"){
            std::cout << text.substr(10, text.size()) << '\n';
        }
    }
}