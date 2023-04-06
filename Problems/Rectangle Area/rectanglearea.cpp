#include <iostream>

int main(){
    double x1;
    double y1;
    double x2;
    double y2;
    
    std::cin >> x1 >> y1 >> x2 >> y2;
    
    double xdif = x1-x2;
    if (xdif < 0){
        xdif *= -1;
    }
    double ydif = y1-y2;
    if (ydif < 0){
        ydif *= -1;
    }
    
    std::cout << xdif*ydif;
}