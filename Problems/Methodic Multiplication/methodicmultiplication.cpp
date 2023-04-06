#include <iostream>

int main(){
    std::string first;
    std::string second;
    
    std::cin >> first >> second;
    
    if (first.size() == 1 || second.size() == 1){
        std::cout << 0;
    }
    
    else{
        int a = (first.size()-1)/3;
        int b = (second.size()-1)/3;
        
        int c = a*b;
        
        std::string res = "0";
        std::string first = "";
        for (int i=0; i<c; i++){
            first += "S(";
        }
        std::cout << first << res << std::string(c, ')');
    }
}