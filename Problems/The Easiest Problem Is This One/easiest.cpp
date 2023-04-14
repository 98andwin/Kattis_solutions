#include <iostream>

int main(){
    while (true){
        int value;
        std::cin >> value;
        
        if (value == 0){
            break;
        }
        
        int N = value;
        int N_sum = 0;
        
        while(N != 0){
            N_sum += N % 10;
            N = (N - (N % 10) )/ 10;
        }
        
        
        bool found = false;
        int m = 11;
        while (!found){
            int mult = value*m;
            
            int mult_sum = 0;
            while(mult != 0){
                mult_sum += mult % 10;
                mult = (mult - (mult % 10) )/ 10;
            }
            
            if(N_sum == mult_sum){
                std::cout << m << '\n';
                found = true;
            }
            else{
                m += 1;
            }
        }
    }
}