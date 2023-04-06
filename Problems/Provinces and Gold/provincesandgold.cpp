#include <iostream>

int main(){
    int g;
    int s;
    int c;
    
    std::cin >> g >> s >> c;
    
    int total = g*3+s*2+c;
    
    if (total < 2){
        std::cout << "Copper";
    }
    
    else if (total < 3){
        std::cout << "Estate or Copper";
    }
    
    else if (total < 5){
        std::cout << "Estate or Silver";
    }
    
    else if (total < 6){
        std::cout << "Duchy or Silver";
    }
    
    else if (total < 8){
        std::cout << "Duchy or Gold";
    }
    
    else{
        std::cout << "Province or Gold";
    }
}