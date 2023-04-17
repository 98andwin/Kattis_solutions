#include <iostream>

int main(){
    int value;
    std::cin >> value;
    if (value%2 == 0){
        std::cout << "Alice\n1";
    }
    else{
        std::cout << "Bob";
    }
}