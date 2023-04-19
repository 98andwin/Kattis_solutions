#include <iostream>

int main(){
    int a = 0;
    int b = 0;
    
    std::string turn;
    std::cin >> turn;
    
    for (int i=0; i<turn.size()/2; i++){
        if (turn[2*i] == 'A'){
            a += ((int)turn[2*i+1]) - 48;
        }
        else if (turn[2*i] == 'B'){
            b += ((int)turn[2*i+1]) - 48;
        }
        
        if (a >= 11 && b < 10){
            std::cout << 'A';
            break;
        }
        else if (b >= 11 && a < 10){
            std::cout << 'B';
            break;
        }
        
        if (a >= 10 && b >= 10){
            int res = a-b;
            
            if (res > 1){
                std::cout << 'A';
                break;
            }
            else if (res < -1){
                std::cout << 'B';
                break;
            }
        }
    }
}