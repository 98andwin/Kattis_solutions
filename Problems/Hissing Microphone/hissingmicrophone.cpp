#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    
    for (int i=0; i<text.size()-1; i++){
        if (text[i] == 's' && text[i+1] == 's'){
            std::cout << "hiss";
            return 0;
        }
    }
    
    std::cout << "no hiss";
    
}