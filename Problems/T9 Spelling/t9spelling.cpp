#include <iostream>
#include <vector>

int main(){
    std::vector <std::vector<char>> phone = {{' '}, {}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
    
    std::string temp;
    getline(std::cin, temp);
    int amount = std::stoi(temp);
    
    for (int i=0; i<amount; i++){
        std::cout << "Case #" << i+1 << ": ";
        int prev;
        std::string text;
        getline(std::cin, text);
        
        for (int j=0; j<text.size(); j++){
            char letter = text[j];
            int x, m;
            bool found = false;
            
            for (int k=0; k<phone.size(); k++){
                for (int l=0; l<phone[k].size(); l++){
                    if (letter == phone[k][l]){
                        x = k;
                        m = l+1;
                        found = true;
                        break;
                    }
                }
                if (found){
                    break;
                }
            }
            
            if (prev == x){
                std::cout << ' ';
            }
            for (int k=0; k<m; k++){
                std::cout << x;
            }
            prev = x;
        }
        std::cout << '\n';
    }
}