#include <iostream>
#include <vector>

int main(){
    std::string text;
    
    getline(std::cin, text);
    std::vector<int> vowel {65, 69, 73, 79, 85};
    
    int res = 0;
    for (int i=0; i<text.size(); i++){
        
        int number = text[i];
        //std::cout << "Text: " << text[i] << " Index: " << number << '\n';
        
        for (int k: vowel){
            if (number == k || number == k+32){
                res += 1;
            }
        }
    }
    std::cout << res;
}