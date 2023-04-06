#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i < amount; i++){
        int n;
        std::cin >> n;
        std::vector<std::string> cities = {"0"};
        for (int j=0; j < n; j++){
            
            std::string city;
            std::cin >> city;
            bool exists = false;
            for (std::string k : cities){
                if (city == k){
                    exists = true;
                }
            }
            if (!exists){
                cities.push_back(city);
            }
            
        }
        std::cout << cities.size()-1 << '\n';
    }
}