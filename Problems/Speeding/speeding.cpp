#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    int first;
    int f_value;
    
    int second;
    int s_value;
    
    int max = 0;
    
    std::cin >> first >> f_value;
    
    for (int i=1; i<amount; i++){
        std::cin >> second >> s_value;
        int speed = (s_value-f_value) / (second-first);
        if (speed > max){
            max = speed;
        }
        first = second;
        f_value = s_value;
    }
    
    std::cout << max;
}