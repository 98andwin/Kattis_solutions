#include <iostream>

int main(){
    int r;
    int f;
    
    std::cin >> r >> f;
    
    r *= 2;
    
    double quarter = r/4;
    
    f = f % r;
    
    if (f > quarter && f < 3*quarter){
        std::cout << "down";
    }
    else{
        std::cout << "up";
    }
}