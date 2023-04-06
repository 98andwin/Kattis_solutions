#include <iostream>

int main(){
    std::string text;
    std::cin >> text;
    int found[26] = {};
    
    for (int i=0; i<text.size(); i++){
        int index = text[i];
        index -= 97; //ascii shift
        
        if (found[index]){
            std::cout << 0;
            return 0;
        }
        
        found[index] = 1;
    }
    std::cout << 1;
}