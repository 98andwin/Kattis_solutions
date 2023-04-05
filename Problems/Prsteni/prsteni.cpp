#include <iostream>

int euklides(int a, int b){
    if (b == 0){
        return a;
    }
    
    return euklides(b, a%b);
}

int main(){
    
    int amount;
    std::cin >> amount;
    
    double first;
    std::cin >> first;
    double second;
    for (int i=1; i<amount; i++){
        std::cin >> second;
        double res = first/second;
        
        int gcd;
        if (first > second){
            gcd = euklides(first, second);
        }
        else{
            gcd = euklides(second, first);
        }
        
        std::cout << first/gcd << '/' << second/gcd << '\n';
        
    }
}