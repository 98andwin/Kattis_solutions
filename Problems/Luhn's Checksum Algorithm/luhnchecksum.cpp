#include <iostream>

int main(){
    int amount;
    std::cin >> amount;
    
    for (int i=0; i<amount; i++){
        std::string code;
        std::cin >> code;
        int sum = 0;
        for (int j=0; j<code.size(); j++){
            int digit = code[j]-48;
            if (j%2 == code.size()%2){
                digit *= 2;
                if (digit >= 10){
                    digit = (digit%10)+1;
                }
            }
            sum += digit;
        }
        if ((sum % 10) == 0){
            std::cout << "PASS\n";
        }
        else{
            std::cout << "FAIL\n";
        }
    }
}