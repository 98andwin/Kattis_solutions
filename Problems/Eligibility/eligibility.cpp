#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::string name, school, born;
        int course;
        std::cin >> name >> school >> born >> course;
        
        int year = std::stoi(school.substr(0, 4));
        if (year >= 2010){
            std::cout << name << " eligible\n";
            continue;
        }
        
        year = std::stoi(born.substr(0, 4));
        if (year >= 1991){
            std::cout << name << " eligible\n";
            continue;
        }
        
        if (course > 40){
            std::cout << name << " ineligible\n";
        }
        else {
            std::cout << name << " coach petitions\n";
        }
        
    }
}