#include <iostream>


int main(){
    std::string text;
    
    std::cin >> text;
    
    std::string substring = text.substr(0, 3);
    if (substring == "555"){
        std::cout << 1;
    }
    else{
         std::cout << 0;
    }
}