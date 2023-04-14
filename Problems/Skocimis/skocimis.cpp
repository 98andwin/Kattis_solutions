#include <iostream>

int main(){
    int a;
    int b;
    int c;
    
    std::cin >> a >> b >> c;
    
    if (b-a > c-b){
        std::cout << b-a-1;
    }
    else{
        std::cout << c-b-1;
    }
}