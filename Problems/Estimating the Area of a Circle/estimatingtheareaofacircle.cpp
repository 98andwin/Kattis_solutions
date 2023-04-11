#include <iostream>

int main(){
    const double pi = 3.14159265;
    std::cout.precision(10);
    while (true){
        double r;
        double n;
        double x;
        std::cin >> r >> n >> x;
        if(r == 0 && n == 0 && x == 0){
            return 0;
        }
        
        std::cout << pi*r*r << ' ' << (x/n)*4 *r *r << '\n';
    }
}