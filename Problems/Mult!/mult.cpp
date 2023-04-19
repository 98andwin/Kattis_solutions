#include <iostream>

int main(){
    int amount, first;
    std::cin >> amount >> first;
    
    for (int i=1; i<amount; i++){
        int value;
        std::cin >> value;
        if ((value % first) == 0){
            std::cout << value << '\n';
            std::cin >> value;
            first = value;
            i++;
        }
    }
}