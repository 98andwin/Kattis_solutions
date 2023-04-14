#include <iostream>

int main(){
    while (true){
        int first;
        int second;
        
        std::cin >> first >> second;
        
        if (first == 0 && second == 0){
            break;
        }
        
        std::cout << first/second << ' ' << first%second << " / " << second << '\n';
    }
}