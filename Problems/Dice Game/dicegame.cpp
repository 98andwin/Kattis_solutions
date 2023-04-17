#include <iostream>

int main(){
    double a, b, c, d, e, f, g, h;
    std::cin >> a >> b >> c >> d >> e >> f >> g >> h;
    
    if ((a+b)/2+(c+d)/2 > (e+f)/2+(g+h)/2){
        std::cout << "Gunnar";
    }
    else if ((a+b)/2+(c+d)/2 < (e+f)/2+(g+h)/2){
        std::cout << "Emma";
    }
    else{
        std::cout << "Tie";
    }
}