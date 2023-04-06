#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int amount;
    
    std::cin >> amount;
    
    int sum = 0;
    
    for (int i=0; i<amount; i++){
        std::string number;
        std::cin >> number;
        
        sum += pow(stoi(number.substr(0, number.size()-1)), stoi(number.substr(number.size()-1, number.size())));
    }
    
    std::cout << sum;
}