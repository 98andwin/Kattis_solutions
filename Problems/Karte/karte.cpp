#include <iostream>
#include <vector>

int main(){
    std::string queue;
    std::cin >> queue;
    
    std::vector <int> P (13, 0);
    std::vector <int> K (13, 0);
    std::vector <int> H (13, 0);
    std::vector <int> T (13, 0);
    
    
    for (int i=0; i<queue.size()/3; i++){
        char suit = queue[3*i];
        std::string sub = queue.substr(3*i+1, 2);
        int num = std::stoi(sub);
        if (suit == 'P'){
            if (P[num-1]){
                std::cout << "GRESKA";
                return 0;
            }
            else{
                P[num-1] = 1;
            }
        }
        
        if (suit == 'K'){
            if (K[num-1]){
                std::cout << "GRESKA";
                return 0;
            }
            else{
                K[num-1] = 1;
            }
        }
        
        if (suit == 'H'){
            if (H[num-1]){
                std::cout << "GRESKA";
                return 0;
            }
            else{
                H[num-1] = 1;
            }
        }
        
        if (suit == 'T'){
            if (T[num-1]){
                std::cout << "GRESKA";
                return 0;
            }
            else{
                T[num-1] = 1;
            }
        }
    }
    
    int sum = 13;
    for (int k: P){
        if (k){
            sum -= 1;
        }
    }
    std::cout << sum << ' ';
    
    sum = 13;
    for (int k: K){
        if (k){
            sum -= 1;
        }
    }
    std::cout << sum << ' ';
    
    sum = 13;
    for (int k: H){
        if (k){
            sum -= 1;
        }
    }
    std::cout << sum << ' ';
    
    sum = 13;
    for (int k: T){
        if (k){
            sum -= 1;
        }
    }
    std::cout << sum << ' ';
}