#include <iostream>
#include <vector>

int main(){
    int amount, type;
    std::cin >> amount >> type;
    
    std::vector <int> map (amount);
    for (int i=0; i<amount; i++){
        int value;
        std::cin >> value;
        map[i] = value;
    }
    
    int sum = 0;
    if (type == 1){
        sum += amount;
        for (int i=0; i<map.size()-3; i++){
            if (map[i] == map[i+1] && map[i] == map[i+2] && map[i] == map[i+3]){
                sum += 1;
            }
        }
    }
    
    else if (type == 2){
        for (int i=0; i<map.size()-1; i++){
            if (map[i] == map[i+1]){
                sum += 1;
            }
        }
    }
    
    else if (type == 3){
        for (int i=0; i<map.size()-2; i++){
            if (map[i] == map[i+1] && map[i]+1 == map[i+2]){
                sum += 1;
            }
            if (map[i] == map[i+1]+1){
                sum += 1;
            }
        }
        if (map[map.size()-2] == map[map.size()-1]+1){
            sum += 1;
        }
    }
    
    else if (type == 4){
        for (int i=0; i<map.size()-2; i++){
            if (map[i+1] == map[i+2] && map[i] == map[i+1]+1){
                sum += 1;
            }
            if (map[i]+1 == map[i+1]){
                sum += 1;
            }
        }
        if (map[map.size()-2]+1 == map[map.size()-1]){
            sum += 1;
        }
    }
    
    else if (type == 5){
        for (int i=0; i<map.size()-2; i++){
            if (map[i] == map[i+1] && map[i] == map[i+2]){
                sum += 1;
            }
            if (map[i] == map[i+2] && map[i] == map[i+1]+1){
                sum += 1;
            }
            
            if (map[i]+1 == map[i+1]){
                sum += 1;
            }
            if (map[i] == map[i+1]+1){
                sum += 1;
            }
        }
        
        if (map[map.size()-2]+1 == map[map.size()-1]){
            sum += 1;
        }
        if (map[map.size()-2] == map[map.size()-1]+1){
            sum += 1;
        }
    }
    
    else if (type == 6){
        for (int i=0; i<map.size()-2; i++){
            if (map[i] == map[i+1] && map[i] == map[i+2]){
                sum += 1;
            }
            if (map[i]+1 == map[i+1] && map[i+1] == map[i+2]){
                sum += 1;
            }
            
            if (map[i] == map[i+1]){
                sum += 1;
            }
            if (map[i] == map[i+1]+2){
                sum += 1;
            }
        }
        if (map[map.size()-2] == map[map.size()-1]){
            sum += 1;
        }
        if (map[map.size()-2] == map[map.size()-1]+2){
            sum += 1;
        }
    }
    
    else if (type == 7){
        for (int i=0; i<map.size()-2; i++){
            if (map[i] == map[i+1] && map[i] == map[i+2]){
                sum += 1;
            }
            if (map[i] == map[i+1] && map[i+1] == map[i+2]+1){
                sum += 1;
            }
            
            if (map[i] == map[i+1]){
                sum += 1;
            }
            if (map[i]+2 == map[i+1]){
                sum += 1;
            }
        }
        if (map[map.size()-2] == map[map.size()-1]){
            sum += 1;
        }
        if (map[map.size()-2]+2 == map[map.size()-1]){
            sum += 1;
        }
    }
    
    std::cout << sum;
}