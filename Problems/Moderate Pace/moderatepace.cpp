#include <iostream>
#include <vector>

int main(){
    int days;
    std::cin >> days;
    
    
    std::vector <std::vector<int>> schedule (3, std::vector <int> (days));
    
    for (int i=0; i<3; i++){
        for (int j=0; j<days; j++){
            int value;
            std::cin >> value;
            schedule[i][j] = value;
        }
    }
    
    
    for (int i=0; i<days; i++){
        int min = schedule[0][i];
        int max;
        
        if (schedule[1][i] < min){
            max = min;
            min = schedule[1][i];
        }
        else{
            max = schedule[1][i];
        }
        
        
        if (schedule[2][i] < min){
            std::cout << min << ' ';
        }
        else if (schedule[2][i] > max){
            std::cout << max << ' ';
        }
        else{
            std::cout << schedule[2][i] << ' ';
        }
    }
}