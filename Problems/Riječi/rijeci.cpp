#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    std::vector <int> fib = {0, 1};
    
    for (int i=1; i<amount; i++){
        fib.push_back(fib[i]+fib[i-1]);
    }
    
    std::cout << fib[amount-1] << ' ' << fib[amount];
}