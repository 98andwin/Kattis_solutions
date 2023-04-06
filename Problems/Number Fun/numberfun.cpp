#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        double a;
        double b;
        double c;
        
        std::cin >> a >> b >> c;
        
        if (a+b==c || a-b==c || b-a==c || a*b==c || a/b==c || b/a==c){
            std::cout << "Possible\n";
        }
        else{
            std::cout << "Impossible\n";
        }
    }
}