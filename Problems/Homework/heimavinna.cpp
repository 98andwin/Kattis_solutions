#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector <int> res (1000, 0);
    while (true){
        std::string text;
        getline(std::cin, text, ';');
        
        if (text.size() == 0){
            int sum = 0;
            for (int k: res){
                if (k){
                    sum += 1;
                }
            }
            std::cout << sum;
            return 0;
        }
        bool check = false;
        for (int i=0; i<text.size(); i++){
            if(text[i] == '-'){
                
                for (int j=std::stoi(std::string(text.substr(0, i))); j<=std::stoi(std::string(text.substr(i+1, text.size()))); j++){
                    res[j-1] = 1;
                }
                check = true;
                break;
                
            }
        }
        if (!check){
            int index = std::stoi(std::string (text));
            res[index-1] = 1;
        }
    }
}