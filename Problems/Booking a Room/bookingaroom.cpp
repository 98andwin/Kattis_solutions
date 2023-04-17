#include <iostream>
#include <vector>

int main(){
    int size, amount;
    std::cin >> size >> amount;
    if (size == amount){
        std::cout << "too late";
    }
    else{
        std::vector <int> hotel (size);
        for (int i=0; i<amount; i++){
            int value;
            std::cin >> value;
            hotel[value-1] = 1;
        }
        
        for (int i=0; i<hotel.size(); i++){
            if (!hotel[i]){
                std::cout << i+1;
                break;
            }
        }
    }
}