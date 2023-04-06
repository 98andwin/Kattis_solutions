#include <iostream>
#include <vector>

int main(){
    std::vector <int> rank (13, 0);
    for(int i=0; i<5; i++){
        std::string card;
        
        std::cin >> card;
        
        if(card[0] == 'A'){
            rank[0] += 1;
        }
        else if(card[0] == 'T'){
            rank[9] += 1;
        }
        else if(card[0] == 'J'){
            rank[10] += 1;
        }
        else if(card[0] == 'Q'){
            rank[11] += 1;
        }
        else if(card[0] == 'K'){
            rank[12] += 1;
        }
        else{
            int value = (int) card[0] - 48;
            rank[value-1] += 1;
        }
    }
    int max = 0;
    for (int k : rank){
        if (k > max){
            max = k;
        }
    }
    std::cout << max;
}