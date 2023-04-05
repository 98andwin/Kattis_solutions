#include <iostream>

int main(){
    std::string text;
    
    std::cin >> text;
    
    int index = 0;
    
    for (int i=0; i < text.size(); i++){
        if (text[i] == 'a'){
            std::cout << text.substr(index, text.size());
            break;
        }
        else{
            index += 1;
        }
    }
}