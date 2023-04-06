#include <iostream>

int main(){
    std::string text;
    int value;
    
    std::cin >> text >> value;
    
    if((text == "OCT" && value == 31) ||(text == "DEC" && value == 25)){
        std::cout << "yup";
    }
    
    else{
        std::cout << "nope";
    }
}