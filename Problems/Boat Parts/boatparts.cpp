#include <iostream>
#include <vector>

int main(){
    int part, amount;
    std::cin >> part >> amount;
    
    std::vector <std::string> ship = {};
    for (int i=0; i<amount; i++){
        std::string text;
        std::cin >> text;
        bool found = false;
        for (int j=0; j<ship.size(); j++){
            if (ship[j] == text){
                found = true;
                break;
            }
        }
        if (!found){
            ship.push_back(text);
        }
        if (ship.size() == part){
            std::cout << i+1;
            return 0;
        }
    }
    std::cout << "paradox avoided";
}