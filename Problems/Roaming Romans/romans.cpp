#include <iostream>
#include <math.h>

int main(){
    double steps;
    std::cin >> steps;
    double res = steps * 1000 * 5280 / 4854;
    
    int check = res;
    double digits = res-check;
    if (digits >= 0.5){
        check += 1;
    }
    std::cout << check;
}