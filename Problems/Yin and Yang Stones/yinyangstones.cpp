#include <iostream>

int main(){
    int sum = 0;
    std::string ring;
    std::cin >> ring;
    
    for (int i=0; i<ring.size(); i++){
        if (ring[i] == 'W'){
            sum += 1;
        }
        else{
            sum -= 1;
        }
    }
    if (!sum){
        std::cout << "1";
    }
    else{
        std::cout << "0";
    }
}