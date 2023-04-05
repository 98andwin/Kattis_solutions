#include <iostream>

int main(){
    int amount;
    
    
    std::cin >> amount;
    double sum = 0;
    for (int i=0; i<amount; i++){
        double factor;
        double year;
        std::cin >> factor >> year;
        sum += factor * year;
    }
    
    std::cout.precision(7);
    std::cout << sum;
}