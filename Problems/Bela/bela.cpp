#include <iostream>
#include <map>

int main(){
    int amount;
    char dom;
    
    std::cin >> amount >> dom;
    
    std::map <char, int> card = {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}
    };
    
    std::map <char, int> card_dom = {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}
    };
    
    int sum = 0;
    for (int i=0; i<amount; i++){
        for (int j=0; j<4; j++){
            std::string pair;
            std::cin >> pair;
            
            if (pair[1] == dom){
                sum += card_dom[pair[0]];
            }
            else{
                sum += card[pair[0]];
            }
        }
    }
    std::cout << sum;
}