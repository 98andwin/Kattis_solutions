#include <iostream>
#include <vector>

int main(){
    std::vector <std::string> word {};
    
    std::string text;
    getline(std::cin, text);
    
    int j=0;
    for (int i=0; i<text.size(); i++){
        if (text[i] == ' '){
            std::string temp = text.substr(i-j, j);
            
            for (std::string k : word){
                if (k==temp){
                    std::cout << "no";
                    return 0;
                }
            }
            word.push_back(temp);
            j = 0;
            continue;
            
        }
        else if (i == text.size()-1){
            std::string temp = text.substr(i-j, j+1);
            
            for (std::string k : word){
                if (k==temp){
                    std::cout << "no";
                    return 0;
                }
            }
            word.push_back(temp);
            j = 0;
        }
        j++;
    }
    
    std::cout << "yes";
}