#include <iostream>

int main(){
    int sum = 0;
    int amount;
    std::cin >> amount;
    char prev;
    std::cin >> prev;
    for (int i=1; i<amount; i++){
        char ans;
        std::cin >> ans;
        if (prev == ans){
            sum += 1;
        }
        prev = ans;
    }
    std::cout << sum;
}