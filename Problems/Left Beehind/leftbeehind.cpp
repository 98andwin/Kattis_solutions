#include <iostream>

int main(){
    while (true){
        int a, b;
        std::cin >> a >> b;
        
        if (a == 0 && b == 0){
            break;
        }
        
        if (a+b == 13){
            std::cout << "Never speak again.\n";
        }
        else if (a > b){
            std::cout << "To the convention.\n";
        }
        else if (a < b){
            std::cout << "Left beehind.\n";
        }
        else if (a == b){
            std::cout << "Undecided.\n";
        }
    }
}