#include <iostream>


int main(){
    int first;
    int second;
    std::cin >> first >> second;
    
    
    if (first < second){
        std::cout << first << ' ' << second;
    }
    else{
        std::cout << second << ' ' << first;
    }
    
}