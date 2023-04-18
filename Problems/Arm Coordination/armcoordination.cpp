#include <iostream>

int main(){
    int a, b, r;
    std::cin >> a >> b >> r;
    
    std::cout << a+r << ' ' << b-r << '\n';
    std::cout << a+r << ' ' << b+r << '\n';
    std::cout << a-r << ' ' << b+r << '\n';
    std::cout << a-r << ' ' << b-r << '\n';
}