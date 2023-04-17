#include <iostream>

int main(){
    int angle, hour, min, min_ang, hour_ang, test;
    std::cin >> angle;
    
    hour = 0;
    min = 0;
    
    while (true){
        min_ang = 60*min;
        hour_ang = 300*hour + 5*min;
        
        if (hour_ang > min_ang){
            test = 3600 + (min_ang - hour_ang);
        }
        else{
            test = min_ang - hour_ang;
        }
        
        if (test == angle){
            if (hour < 10){
                std::cout << 0;
            }
            std::cout << hour << ':';
            if (min < 10){
                std::cout << 0;
            }
            std::cout << min;
            break;
        }
        else{
            min += 1;
            if (min == 60){
                min = 0;
                hour += 1;
            }
        }
    }
}