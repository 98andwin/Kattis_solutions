#include <iostream>

int main(){
    double h;
    double w;
    
    std::cin >> w >> h;
    
    std::cout.precision(9);
    std::cout << w*h/2;
}