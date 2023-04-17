#include <iostream>
#include <vector>

int main(){
    int amount;
    
    std::cin >> amount;
    std::vector <int> days (365, 0);
    for (int i=0; i<amount; i++){
        int a;
        int b;
        std::cin >> a >> b;
        
        for (int j=a; j<=b; j++){
            days[j-1] = 1;
        }
    }
    int sum = 0;
    for (int k: days){
        if (k){
            sum += 1;
        }
    }
    std::cout << sum;
    
}