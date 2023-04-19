#include <iostream>
#include <vector>

int main(){
    std::vector <int> order (101);
    int size, amount;
    std::cin >> size >> amount;
    
    std::vector <int> part = {0};
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        part.push_back(value);
    }
    part.push_back(size);
    
    for (int i=0; i<part.size()-1; i++){
        for (int j=i+1; j<part.size(); j++){
            int length = part[j]-part[i];
            order[length] = 1;
        }
    }
    
    for (int i=0; i<order.size(); i++){
        if (order[i]){
            std::cout << i << ' ';
        }
    }
}