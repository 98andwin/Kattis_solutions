#include <iostream>
#include <vector>

int main(){
    
    while (true){
        int size;
        
        std::cin >> size;
        if (size == -1){
            break;
        }
        
        std::vector<std::vector<int>> matrix (size, std::vector<int>(size));
        for (int i=0; i<size; i++){
            for (int j=0; j<size; j++){
                int value;
                std::cin >> value;
                matrix[i][j] = value;
            }
        }
        
        
        for (int i=0; i<size; i++){
            bool check = false;
            for (int j=0; j<size-1; j++){
                if (check){
                    break;
                }
                if (matrix[i][j]){
                    //std::cout << "i: " << i << " j: " << j << " is true \n";
                    for (int k=j+1; k<size; k++){
                        if (matrix[j][k] && matrix[i][k]){
                            //std::cout << j << " and " << k << " share vertice \n";
                            check = true;
                            break;
                        }
                        
                    }
                }
            }
            if(check){
                continue;
            }
            else{
                std::cout << i << ' ';
            }
        }
        
        std::cout << '\n';
    }
}