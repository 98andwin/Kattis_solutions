#include <iostream>

int euklides(int a, int b){
    if (b == 0){
        return a;
    }
    
    return euklides(b, a%b);
}

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    
    if (a*b/euklides(a, b) <= c){
        std::cout << "yes";
    }
    else{
        std::cout << "no";
    }
}