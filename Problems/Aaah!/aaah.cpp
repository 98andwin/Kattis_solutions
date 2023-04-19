#include <iostream>

int main(){
    std::string first;
    std::string second;
    
    std::cin >> first >> second;
    
    if (first.length() < second.length()){
        std::cout << "no";
    }
    else{
        std::cout << "go";
    }
}