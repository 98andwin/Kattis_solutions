#include <iostream>
#include <vector>

int main(){
    
    int row;
    int length;
    
    std::cin >> row >> length;
    
    std::vector<std::vector<char>> carmap (row, std::vector<char>(length));
    
    for (int i=0; i<row; i++){
        for (int j=0; j<length; j++){
            char text;
            std::cin >> text;
            carmap[i][j] = text;
        }
    }
    std::vector<int> res {0, 0, 0, 0, 0};
    
    for (int i=0; i<carmap.size()-1; i++){
        for (int j=0; j<carmap[0].size()-1; j++){
            int counter = 0;
            bool check = true;
            for (int x = 0; x < 2; x++){
                for (int y = 0; y < 2; y++){
                    if (carmap[i+x][j+y] == 'X'){
                        counter += 1;
                    }
                    else if (carmap[i+x][j+y] == '#'){
                        check = false;
                    }
                    
                }
            }
            if (check){
                res[counter] += 1;
                
            }
            
        }
    }
    
    for (int i: res){
        std::cout << i << '\n';
    }
}