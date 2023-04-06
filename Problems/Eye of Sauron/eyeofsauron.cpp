#include <iostream>

int main(){
    std::string text;
    
    std::cin >> text;
    if (text.size()%2 == 1){
        std::cout << "fix";
        return 0;
    }
    int middle = text.size()/2;
    if(text[middle-1] == '(' && text[middle] == ')'){
        std::cout << "correct";
    }
    else{
        std::cout << "fix";
    }
}