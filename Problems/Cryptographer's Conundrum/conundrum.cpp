#include <iostream>

int main(){
    std::string text;
    
    std::cin >> text;
    
    int counter = 0;
    for (int i=0; i<text.size(); i++){
        if (i%3 == 0 && text[i] != 'P'){
            counter += 1;
        }
        else if (i%3 == 1 && text[i] != 'E'){
            counter += 1;
        }
        else if (i%3 == 2 && text[i] != 'R'){
            counter += 1;
        }
    }
    std::cout << counter;
}