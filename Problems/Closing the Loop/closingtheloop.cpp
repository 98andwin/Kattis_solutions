#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::vector <int> rope (201);
        int len;
        std::cin >> len;
        
        int b = 0;
        int r = 0;
        for (int j=0; j<len; j++){
            int value;
            char color;
            std::cin >> value >> color;
            
            if (color == 'B'){
                rope[value] += 1;
                b += 1;
            }
            else if (color == 'R'){
                rope[100+value] += 1;
                r += 1;
            }
        }
        if (len == 1){
            std::cout << "Case #" << i+1 << ": " << 0 << '\n';
            continue;
        }
        else{
            if (b<=r){
                int sum = 0;
                int count_b = 0;
                int index = 100;
                while(index > 0 && count_b != b){
                    if (rope[index] > 0){
                        rope[index] -= 1;
                        count_b += 1;
                        sum += index;
                    }
                    else{
                        index -= 1;
                    }
                }
                
                count_b = 0;
                index = 200;
                while(index > 100 && count_b != b){
                    if (rope[index] > 0){
                        rope[index] -= 1;
                        count_b += 1;
                        sum += index-100;
                    }
                    else{
                        index -= 1;
                    }
                }
                
                std::cout << "Case #" << i+1 << ": " << sum - 2*b << '\n';
            }
            
            else if (b>r){
                int sum = 0;
                int count_r = 0;
                int index = 100;
                while(index > 0 && count_r != r){
                    if (rope[index] > 0){
                        rope[index] -= 1;
                        count_r += 1;
                        sum += index;
                    }
                    else{
                        index -= 1;
                    }
                }
                
                count_r = 0;
                index = 200;
                while(index > 100 && count_r != r){
                    if (rope[index] > 0){
                        rope[index] -= 1;
                        count_r += 1;
                        sum += index-100;
                    }
                    else{
                        index -= 1;
                    }
                }
                
                std::cout << "Case #" << i+1 << ": " << sum - 2*r << '\n';
            }
        }
    }
}