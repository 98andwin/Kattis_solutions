#include <iostream>
int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::string num;
        std::cin >> num;
        std::cout << num.size() << '\n';
    }
}