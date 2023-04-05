#include <iostream>

int main(){
    std::string s;
    std::string res = "";
    std::cin >> s;
    
    res.append(s,0,1);
    
    for (int i = 1; i < s.length(); i++){
        
        if (s[i-1] == '-'){
            res.append(s,i,1);
        }
    }
    
    std::cout << res;
}