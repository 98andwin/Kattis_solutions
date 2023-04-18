#include <iostream>

int main(){
    double i, j, k, a, b, c;
    
    std::cin >> i >> j >> k >> a >> b >> c;
    
    double qi = i/a;
    double qj = j/b;
    double qk = k/c;
    
    std::cout.precision(6);
    if (qi <= qj && qi <= qk){
        std::cout << i-qi*a << ' ' << j-qi*b << ' ' << k-qi*c;
    }
    else if (qi >= qj && qj <= qk){
        std::cout << i-qj*a << ' ' << j-qj*b << ' ' << k-qj*c;
    }
    else if (qi >= qk && qj >= qk){
        std::cout << i-qk*a << ' ' << j-qk*b << ' ' << k-qk*c;
    }
}