#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    
    std::string first = text.substr(0, text.size()/3);
    std::string second = text.substr(text.size()/3, text.size()/3);
    std::string third = text.substr(2*text.size()/3, text.size()/3);
    
    if (first == second){
        std::cout << first;
    }
    else if (first == third){
        std::cout << first;
    }
    else{
        std::cout << second;
    }
}