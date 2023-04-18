#include <iostream>
#include <vector>

int main(){
    std::vector <std::string> entered = {};
    
    int amount;
    std::cin >> amount;
    for (int i=0; i<amount; i++){
        std::string action, name;
        std::cin >> action >> name;
        
        if (entered.size()==0){
            if (action == "entry"){
                entered.push_back(name);
                std::cout << name << " entered\n";
            }
            else{
                std::cout << name << " entered (ANOMALY)\n";
            }
        }
        else{
            if (action == "entry"){
                bool found = false;
                for (std::string k: entered){
                    if (k == name){
                        std::cout << name << " entered (ANOMALY)\n";
                        found = true;
                        break;
                    }
                }
                if (!found){
                    entered.push_back(name);
                    std::cout << name << " entered\n";
                }
            }
            else{
                bool found = false;
                for (int j=0; j<entered.size(); j++){
                    if (entered[j] == name){
                        entered.erase(entered.begin()+j);
                        std::cout << name << " exited\n";
                        found = true;
                        break;
                    }
                }
                if (!found){
                    std::cout << name << " exited (ANOMALY)\n";
                }
            }
        }
    }
}