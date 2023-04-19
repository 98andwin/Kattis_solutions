#include <iostream>

int main(){
    int amount, p, q;
    std::cin >> amount >> p >> q;
    
    int turn = (p+q)/amount % 2;
    if (turn){
        std::cout << "opponent";
    }
    else{
        std::cout << "paul";
    }
}