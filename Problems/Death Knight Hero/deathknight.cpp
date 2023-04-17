#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    int sum = 0;
    for (int i=0; i<amount; i++){
        std::string text;
        std::cin >> text;
        bool failed = false;
        for (int j=0; j<text.size()-1; j++){
            if (text[j] == 'C' && text[j+1] == 'D'){
                failed = true;
                break;
            }
        }
        if (!failed){
            sum += 1;
        }
    }
    std::cout << sum;
}