#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    if (amount >= 8){
        std::cout << "satisfactory";
    }
    else{
        std::cout << "unsatisfactory";
    }
}