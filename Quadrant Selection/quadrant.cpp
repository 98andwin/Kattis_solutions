#include <iostream>


int main(){
    int first;
    int second;
    
    std::cin >> first >> second;
    
    
    if (first > 0 && second > 0){
        std::cout << 1;
    }
    
    else if (first < 0 && second > 0){
        std::cout << 2;
    }
    
    else if (first < 0 && second < 0){
        std::cout << 3;
    }
    
    else if (first > 0 && second < 0){
        std::cout << 4;
    }
}