#include <iostream>

int main(){
    int a, b, c, d, e;
    int value;
    std::cin >> a >> b >> c >> d >> e >> value;
    
    
    
    if (value >= a){
        std::cout << 'A';
        return 0;
    }
    if (value >= b){
        std::cout << 'B';
        return 0;
    }
    if (value >= c){
        std::cout << 'C';
        return 0;
    }
    if (value >= d){
        std::cout << 'D';
        return 0;
    }
    if (value >= e){
        std::cout << 'E';
        return 0;
    }
    std::cout << 'F';
    return 0;
}