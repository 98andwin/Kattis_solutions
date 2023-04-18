#include <iostream>
#include <vector>

int main(){
    std::vector <int> queue (5);
    for (int i=0; i<5; i++){
        int value;
        std::cin >> value;
        queue[i] = value;
    }
    
    for (int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            if (queue[j] > queue[j+1]){
                int temp = queue[j];
                queue[j] = queue[j+1];
                queue[j+1] = temp;
                
                for (int k: queue){
                    std::cout << k << ' ';
                }
                std::cout << '\n';
            }
        }
    }
}