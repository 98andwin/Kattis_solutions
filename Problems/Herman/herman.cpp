#include <iostream>
#include <math.h>

int main(){
    const double pi = 3.141592653589793238;
    double value;
    std::cin >> value;
    std::cout.precision(20);
    std::cout << value*value*pi << '\n' << value*value*2;
}
