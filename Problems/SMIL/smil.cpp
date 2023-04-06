#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    
    for (int i=0; i < text.size(); i++){
        std::string check = text.substr(i, 3);
        if (check == ":-)" || check == ";-)"){
            std::cout << i << '\n';
            continue;
        }
        
        check = text.substr(i, 2);
        if (check == ":)" || check == ";)"){
            std::cout << i << '\n';
            continue;
        }
    }
}