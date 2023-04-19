#include <iostream>
#include <vector>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        int x, y;
        std::cin >> x >> y;
        
        std::vector <std::vector<char>> map (x, std::vector<char> (y));
        
        for (int j=0; j<x; j++){
            for (int k=0; k<y; k++){
                char letter;
                std::cin >> letter;
                map[j][k] = letter;
            }
        }
        
        std::cout << "Test " << i+1 << '\n';
        for (int j=x-1; j>=0; j--){
            for (int k=y-1; k>=0; k--){
                std::cout << map[j][k];
            }
            std::cout << '\n';
        }
    }
}