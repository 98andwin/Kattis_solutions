#include <iostream>

int main(){
    double r, c;
    std::cin >> r >> c;
    std::cout.precision(10);
    std::cout << ((r-c)*(r-c)*3.1459265) / (r*r*3.1459265) * 100.0;
}