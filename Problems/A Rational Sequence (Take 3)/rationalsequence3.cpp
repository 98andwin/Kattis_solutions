#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int set, value;
        std::cin >> set >> value;
        int nom = 1;
        int denom = 1;
        std::vector <int> order = {};
        while (value != 1){
            if (value%2){
                order.push_back(1);
                value = (value-1)/2;
            }
            else{
                order.push_back(0);
                value /= 2;
            }
        }
        
        for (int j=0; j<order.size(); j++){
            if (order[order.size()-1-j]){
                nom += denom;
            }
            else{
                denom += nom;
            }
        }
        std::cout << set << ' ' << nom << '/' << denom << '\n';
    }
}