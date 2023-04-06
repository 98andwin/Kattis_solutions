#include <iostream>

int main(){
    int n;
    int sum = 2;
    std::cin >> n;
    
    
    for (int i=0; i<n; i++){
        sum += sum-1;
    }
    std::cout << sum*sum;
}