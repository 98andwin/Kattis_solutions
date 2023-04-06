#include <iostream>

int main(){
    int a;
    int b;
    std::cin >> a >> b;
    
    if (b%2 == 0){
        std::cout << "possible";
    }
    else{
        std::cout << "impossible";
    }
}