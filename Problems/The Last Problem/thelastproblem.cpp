#include <iostream>

int main(){
    std::string name;
    getline(std::cin, name);
    
    std::cout << "Thank you, " << name << ", and farewell!";
}