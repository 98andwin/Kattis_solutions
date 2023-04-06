#include <iostream>

int main(){
    int a;
    int b;
    int c;
    int d;
    
    std::cin >> a >> b >> c >> d;
    
    if (a-c >= 2 && b-d >= 2){
        std::cout << 1;
    }
    else{
        std::cout << 0;
    }
}