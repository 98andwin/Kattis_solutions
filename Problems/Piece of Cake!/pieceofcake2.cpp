#include <iostream>

int main(){
    int side;
    int x;
    int y;
    
    std::cin >> side >> x >> y;
    
    if(side-x > x){
        x = side-x;
    }
    
    if(side-y > y){
        y = side-y;
    }
    
    std::cout << x*y*4;
}