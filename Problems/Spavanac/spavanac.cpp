#include <iostream>

int main(){
    int hour;
    int min;
    
    std::cin >> hour >> min;
    
    min -= 45;
    
    if(min < 0){
        hour = hour - 1;
        min += 60;
        if(hour < 0){
            hour = 23;
        }
    }
    
    std::cout << hour << ' ' << min;
}