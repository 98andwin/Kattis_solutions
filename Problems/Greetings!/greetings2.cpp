#include <iostream>


int main(){
    std::string text;
    
    std::cin >> text;
    
    std::string substring ((text.length()-2)*2, 'e');
    
    std::cout << 'h' << substring << 'y';
}