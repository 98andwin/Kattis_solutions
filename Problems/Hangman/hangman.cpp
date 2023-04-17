#include <iostream>
#include <vector>

int main(){
    std::string word;
    std::string guess;
    
    std::cin >> word >> guess;
    
    std::vector <int> found (26);
    for (int i=0; i<word.size(); i++){
        int value = word[i] - 65;
        found[value] = 1;
    }
    
    int wrong = 0;
    for (int i=0; i<guess.size(); i++){
        int value = guess[i] - 65;
        if (found[value]){
            found[value] = 0;
        }
        else{
            wrong += 1;
        }
        
        if (wrong == 10){
            std::cout << "LOSE";
            break;
        }
        
        bool game = true;
        for (int k: found){
            if (k != 0){
                game = false;
            }
        }
        if (game){
            std::cout << "WIN";
            break;
        }
    }
}