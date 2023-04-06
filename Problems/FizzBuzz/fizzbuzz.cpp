#include <iostream>

int main(){
    int x;
    int y;
    
    int amount;
    
    std::cin >> x >> y >> amount;
    
    for (int i=1; i<=amount; i++){
        std::string text = "";
        if (i%x == 0){
            text.append("Fizz");
        }
        if (i%y == 0){
            text.append("Buzz");
        }
        
        if (text == ""){
            std::cout << i << '\n';
        }
        else{
            std::cout << text << '\n';
        }
    }
}