#include <iostream>

int main(){
    int amount;
    
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::string ref_text;
        std::string compare;
        
        std::cin >> ref_text >> compare;
        std::string res = "";
        
        for (int j=0; j<ref_text.size(); j++){
            if (ref_text[j] != compare[j]){
                res.push_back('*');
            }
            else{
                res.push_back('.');
            }
        }
        std::cout << ref_text << '\n' << compare << '\n' << res << "\n\n";
    }
}