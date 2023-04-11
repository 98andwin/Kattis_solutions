#include <iostream>

int main(){
    std::string text;
    getline(std::cin, text);
    int length = text.size();
    std::string res = text.substr(length-3);
    
    if (res == "eh?"){
        std::cout << "Canadian!";
    }
    else{
        std::cout << "Imposter!";
    }
}