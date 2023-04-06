#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    std::string team;
    std::string name;
    std::cin >> team >> name;
    
    std::vector <std::string> found = {team};
    
    int total = 1;
    std::cout << team << ' ' << name << '\n';
    for (int i=1; i<amount; i++){
        std::string team;
        std::string name;
        std::cin >> team >> name;
        bool inside = false;
        for (std::string k: found){
            if (k == team){
                inside = true;
                break;
            }
        }
        
        if (!inside){
            found.push_back(team);
            std::cout << team << ' ' << name << '\n';
            total += 1;
        }
        if (total == 12){
            break;
        }
    }
}