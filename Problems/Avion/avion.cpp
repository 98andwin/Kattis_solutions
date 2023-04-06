#include <iostream>

int main(){
    const int amount = 5;
    
    bool escaped = true;
    for (int i=0; i<amount; i++){
        std::string text;
        std::cin >> text;
        
        for (int j=0; j<text.size()-2; j++){
            std::string check = text.substr(j, 3);
            if (check == "FBI"){
                std::cout << i+1 << ' ';
                escaped = false;
            }
        }
    }
    if (escaped){
        std::cout << "HE GOT AWAY!";
    }
}