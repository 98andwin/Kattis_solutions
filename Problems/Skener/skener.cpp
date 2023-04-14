#include <iostream>
#include <vector>

int main(){
    int x_size;
    int y_size;
    
    int x_scale;
    int y_scale;
    
    std::cin >> x_size >> y_size >> x_scale >> y_scale;
    
    std::vector <std::vector<char>> map (x_size, std::vector<char> (y_size));
    
    for (int i=0; i<x_size; i++){
        for (int j=0; j<y_size; j++){
            char value;
            std::cin >> value;
            map[i][j] = value;
        }
    }
    
    for (int i=0; i<x_size; i++){
        for(int l=0; l<x_scale; l++){
            for (int j=0; j<y_size; j++){
                for(int k=0; k<y_scale; k++){
                    std::cout << map[i][j];
                }
            }
            std::cout << '\n';
        }
    }
}